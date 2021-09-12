#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <map>

using namespace std;

bool checkIfRepeated(const string &entrada)
{
    int aux2;
    vector<char> aux;
    if(entrada.empty())
    {
        return false;
    }    

    for (const auto &c : entrada)
    {
        for(auto k : aux)
        {
           if(c == k) return false;
        }

        aux.push_back(c);
        cout << c << endl;
    }

    return true;
}

int main ()
{
    string frase {"holaa123"};
    cout << checkIfRepeated(frase)<<endl;
}