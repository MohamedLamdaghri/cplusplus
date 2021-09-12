#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>

using namespace std;

bool esVocal(char letra)
{
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        return true;
    }
    return false;
}

string empiezaPorVocal(string cadena)
{
    string palabra, aux;
    int tam = cadena.size();
    for(int i = 0; i < tam; i++)
    {
        if(cadena[i] == ' ')
        {
            aux += palabra;
            aux += " | ";
            palabra.clear();
        }
        else if(esVocal(cadena[i]))
        {   
            int k;
            k = i;
            while(cadena[k] != ' ')
            {
                 palabra += cadena[k];
                 k++;
            } 
        }
    }
    
    aux += palabra;
    
    return aux;
}

int main()
{
    string texto_largo {"e vivia un hidalgo de los de lanza en astillero adarga antiguo rocin flaco y galgo corredor una olla de algo mas vaca que carnero salpican las mas noches duelos y quebrantos los sabados lentejas los viernes algan palomino de anadidura los domingos consumian las tres partes de su hacienda"};
   
    cout << empiezaPorVocal(texto_largo);

    return 0;
}