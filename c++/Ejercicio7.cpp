#include <iostream>
#include <map>
//#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool checkIfRepeated(const string &entrada)
{
    int aux2;
    map<char, int> aux;
    if(entrada.empty())
    {
        return false;
    }    

    for (const auto &c : entrada)
    {
        if(aux[c] == 1) return false;
        aux[c] = 1;
    }

    return true;
}

int main()
{
    string prueba {"hola123"};

    cout<<boolalpha;

    cout << checkIfRepeated(prueba) << endl;
    
    return 0;
}