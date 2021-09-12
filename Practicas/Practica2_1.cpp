#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main()
{
    string frase, palabra, entrada, salida;
    vector<string> vStr;
    bool eof;

    do
    {
        cout << "Introduzca el nombre del fichero de entrada: "<<endl;
        getline(cin, entrada);
        cout << "Introduzca el nombre del fichero de salida: "<<endl;
        getline(cin, salida);
    } while (entrada == salida);

    ifstream fentrada(entrada);
    ofstream fsalida(salida);

    do    
    {
        eof = getline(fentrada, frase).eof();

        for(auto letra : frase)
        {
            if(letra == ' ')
            {
                vStr.push_back(palabra);
                palabra.clear();
            }
            else if(!ispunct(letra))
            {
               palabra += tolower(letra);
            }
        }
        
        vStr.push_back(palabra);
        palabra.clear();

    }while(!eof);

    sort(vStr.begin(), vStr.end());

    for(auto elemento : vStr)
    {
        fsalida << elemento << endl;
    }

    return 0;
}