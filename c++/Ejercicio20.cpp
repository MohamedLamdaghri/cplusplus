#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>

using namespace std;

vector<string> solucion(string cadena, char separacion, int saltos)
{
    int aux2 = 0;
    string aux;
    vector<string> palabras;
    for(char a : cadena)
    {
        if(aux2 == saltos)
        {
            palabras.push_back(aux);
            aux.clear();
            aux2 = 0;
        }
        else if(a == separacion)
        {
            aux2++;
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
    string m {"Mohamed, kkok, mama mia, loco, mam, kjla, dfgh,ytre"};
    vector<string> resultado = solucion(m, ',', 3);
    for(auto a : resultado) cout << a << endl;
    return 0;
}