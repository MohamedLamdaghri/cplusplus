#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

string resultado(vector<int> enteros, string palabra)
{
    for(int a : enteros)
    {
        if(a >= palabra.size())
        {
            return "";
        }
    }

    string aux;


    return aux;
}

int main ()
{
    string palabra {"Hola me llamo Juan"};
    palabra.erase(7,1);
    cout << palabra << endl;
    return 0;
}