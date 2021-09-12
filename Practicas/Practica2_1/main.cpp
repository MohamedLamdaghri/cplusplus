#include <iostream>
#include <cmath>
#include "complejo.hpp"

using namespace std;

int main()
{
    complejos::Complejo c1 {1, 2}, c2 {2, 3}, c3, c4{1}, c5{1 , 3.14 , complejos::FormatoNumComplejo::modArg};
    c3 = c1 + c2;
    std::cout << c3 << std::endl;
    c4 = c1 - c2;
    std::cout << c4 << std::endl;

    std::cout << c4.conjugado()  << std::endl;
    //std::cin >> c4;
    //std::cout << c4 << std::endl;
    // c4.setFormato(complejos::FormatoNumComplejo::moduloArg);
    std::cout << c4 / c3 << std::endl;
    std::cout << c4.to_string(/*complejos::FormatoNumComplejo::realImg*/) << std::endl;
    //c3 = !c4;
    //std::cout << "conjugado: " << c3.to_string() << std::endl;
    return 0;

}
