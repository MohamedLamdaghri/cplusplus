#include "Parcial2017.h"
#include <iostream>
#include <iomanip>
int main () 
{
    std::cout << std::boolalpha;
    Bala b1 {1, 2, 10, 20, 100};
    std::cout << "b1: " << b1 << '\n';

    for (int i=0; i<100; ++i)
        b1.tick(200,200);
    
    std::cout << "b1 100: " << b1 << '\n';
    Marcianito m1 {1, 2, 100};
    std::cout << "m1: " << m1 << ", colision b1: " << m1.colisionar(b1)<< '\n';
    Marcianito m2 {1001, 2002, 100};
    std::cout << "m2: " << m2 << ", colision b1: " << m2.colisionar(b1)<< '\n';
    std::cout << "\tm2 tras colision: " << m2 << '\n';
    
    for (int i=0; i<100; ++i)
        m1.tick(200, 200);
    
    Bala b3 {81, 82, 10, 20, 100};
    std::cout << "m1: " << m1 << ", colision b3: " << m1.colisionar(b3)<< '\n';
    std::cout << "\tm1 tras colision: " << m1 << '\n';
    Pantalla p {200, 200};
    
    p.add_marcianito(Marcianito{10, 20, 100});
    p.add_marcianito(Marcianito{20, 40, 100});
    p.add_marcianito(Marcianito{40, 80, 100});
    p.tick();
    
    std::cout << p << "Todos muertos? " << p.marcianitos_muertos() << '\n';
    
    p.add_bala(Bala{2, 12, 10, 10, 100});
    p.add_bala(Bala{12, 32, 10, 10, 100});
    p.add_bala(Bala{2, 120, 10, 10, 100});
    p.tick();
    
    std::cout << p << "Todos muertos? " << p.marcianitos_muertos() << '\n';
    
    p.add_bala(Bala{33, 73, 10, 10, 100});
    p.tick();
    
    std::cout << p << "Todos muertos? " << p.marcianitos_muertos() << '\n';
}