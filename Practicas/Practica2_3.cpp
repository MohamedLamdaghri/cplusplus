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
    vector<map<string,int>> mapas(15);
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
            if(letra == ' ' && palabra.size() > 0)
            {
                mapas[palabra.size() - 1][palabra] +=1;
                palabra.clear();
            }
            else if(!ispunct(letra))
            {
               palabra += tolower(letra);
            }
        }
        if(palabra.size() > 0)
        {
            mapas[palabra.size() - 1][palabra] +=1;
            palabra.clear();
        }

    }while(!eof);

    int k = 1;
    for(auto mapa : mapas)
    {
        for(auto elemento : mapa)
        {
            fsalida << k << "->" <<elemento.first <<" : "<< elemento.second  << endl;
        }
        k++;
    }
    return 0;
}