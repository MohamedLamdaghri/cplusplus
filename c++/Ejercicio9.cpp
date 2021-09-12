#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

bool esVocal(char letra)
{
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        return true;
    }
    return false;
}

string vocales(const string &entrada)
{
    string vocales, aux1;
    int aux = 0;
    for(char a : entrada)
    {
        if(esVocal(a))
        {
            vocales += a;
            aux++;
        }
        else
        {
            if(aux > aux1.size())
            {
                aux1 = vocales;
                aux = 0;
                vocales.clear();
            }

        }
    }
    if(aux > aux1.size())
        {
            aux1 = vocales;
            aux = 0;
            vocales.clear();
        }
    return aux1;
}

int main ()
{
    string a {"abcdeaijaeeeeeakjlkhsdfaeia"};
    cout << vocales(a) << endl;
    return 0;
}