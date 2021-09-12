#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

vector<int> solucion(vector<int> enteros){
    vector<int> aux;

    for(int i = 2; i < enteros.size(); i++)
    {
        if(enteros[i] == (enteros[i-1] + enteros[i-2]))
        {
            aux.push_back(enteros[i-2]);
            aux.push_back(enteros[i-1]);
            aux.push_back(enteros[i]);
        }
    }
    return aux;
}

int main ()
{
    vector<int> enteros {1,2,3,2,2,3,5,8,5,4,2,7};

    vector<int> resultado = solucion(enteros);
    cout<< "{";
    for (int a : resultado)
    {
        cout<< a << ",";
    }
    cout << "}";

    return 0;
}