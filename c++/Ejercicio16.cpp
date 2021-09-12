#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

vector<string> solucion(vector<string> palabras)
{
    vector<string> aux;
    for(auto a : palabras)
    {
        if(isupper(a.front()) || isupper(a.back())) aux.push_back(a);
    }
    return aux;
}

int main ()
{
    vector<string> palabras {"Hola", "Me", "llamO", "mohamed"}, resultado;
    resultado = solucion(palabras);

    for(auto a : resultado)
    {
        cout << a << endl;
    }
    
    return 0;
}