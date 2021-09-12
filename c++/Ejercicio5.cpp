#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <set>

using namespace std;

ostream& operator<< (ostream &os, const set<int> &s) 
{
    for (const auto &i : s)
    {
        os << i << ", ";
    }
        
    return os;
}


bool checkIfRepeated(const string &entrada)
{
    set<char> aux;
    if(entrada.empty())
    {
        return false;
    }    

    for (const auto &c : entrada)
    {
        aux.insert(c);
        cout << c << endl;
    }

    for(auto j : aux)
    {
        if(aux.count(j)>1) // .count solo devuelve 1 o 0, presente o no.
        {
            return false;
        }
    }
    return true;
}

bool no_hay_repe_set (const string &str) {
    if (str.empty()) 
        return false;
    set<char> s;
    for (const auto &c : str) 
    {
        auto res = s.insert(c); //C++17 à auto [it, nuevo] = s.insert(c);
        if (!res.second) //C++17 à if (!nuevo)
            return false;
    }
    return true;
}

int main ()
{
    string entrada {"aaaabdc123"};

    cout << checkIfRepeated(entrada);

    return 0;
}