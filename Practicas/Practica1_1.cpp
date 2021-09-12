#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    bool eof;

    do    
    {
        eof = getline(cin, frase).eof();

        for(auto letra : frase)
        {
            if(letra == ' ')
            {
                cout << endl;
            }
            else if(!ispunct(letra))
            {
                cout << letra;
            }
        }
        cout << endl;
    }while(!eof);
    
    return 0;
}