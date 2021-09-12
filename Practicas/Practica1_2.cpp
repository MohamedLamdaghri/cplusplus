#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string frase, palabra;
    vector<string> vStr;
    bool eof;

    do    
    {
        eof = getline(cin, frase).eof();

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
        cout<< elemento << endl;
    }

    return 0;
}