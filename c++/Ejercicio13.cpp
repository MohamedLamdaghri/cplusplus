#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <string>

using namespace std;

string solucion(vector<int> enteros, string letras)
{
    string aux;
    int tam = enteros.size();
    if(enteros.size() != letras.size())
    {
        return "¡Las colecciones no son del mismo tamanio!";
    }
    for(int i = 0; i < tam; i++)
    {
        for(int k = 0; k < enteros[i]; k++)
        {
            aux+=letras[i];
        }
    }
    return aux;
}

int main ()
{
    vector<int> enteros {1, 2 ,3 , 4 ,5};
    string palabra {"abcde"};

    cout << solucion(enteros, palabra) << endl;
    return 0;
}