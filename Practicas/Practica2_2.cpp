#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

int main()
{
    string frase, palabra, entrada, salida;
    map<string, int> mapaQuijote;
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
                mapaQuijote[palabra] +=1;
                palabra.clear();
            }
            else if(!ispunct(letra))
            {
               palabra += tolower(letra);
            }
        }
        
        mapaQuijote[palabra] +=1;
        palabra.clear();

    }while(!eof);

    for(auto elemento : mapaQuijote)
    {
        fsalida << elemento.first <<" : "<<elemento.second  << endl;
    }

    return 0;
}