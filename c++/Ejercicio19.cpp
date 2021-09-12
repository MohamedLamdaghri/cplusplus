#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> solucion(string cadena, char separacion)
{
    string aux;
    vector<string> palabras;
    for(char a : cadena)
    {
        if(a == separacion)
        {
            palabras.push_back(aux);
            aux.clear();
        }
        else
        {
            aux+=a;
        }
    }
    palabras.push_back(aux);
    return palabras;
}

int main ()
{
    string m {"Mohamed, kkok, mama mia"};
    vector<string> resultado = solucion(m, ',');
    for(auto a : resultado) cout << a << endl;
    return 0;
}
