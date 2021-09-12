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


set<int> interseccion(set<int> s1, set<int> s2)
{
    set<int> aux;

    for(auto i : s1)
    {
        for(auto j : s2)
        {
            if(j == i)
            {
                aux.insert(j);
            }
        }
    }

    return aux;
}

int main()
{
    set<int> miSet1;
    set<int> miSet2;
    miSet1 = {1, 2, 3, 4, 5, 6};
    miSet2 = {7 , 8, 9, 10, 6};

    cout << interseccion(miSet1, miSet2 ) << endl;

    return 0;
}