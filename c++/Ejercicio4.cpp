#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>

using namespace std;

bool subconjuntos(set<int> s1, set<int> s2)
{
    set<int> menor { s1.size()>s2.size()? s2 : s1 };

    const set<int> &mayor { s1.size()>s2.size()? s1 : s2 };
    
    for (const auto &ss : mayor) 
    {
        if (menor.count(ss) != 0) 
        {
            menor.erase(ss);
        }
    }
    
    return menor.empty();
}

int main ()
{
    set<int> miSet1;
    set<int> miSet2;
    miSet1 = {1, 2, 3, 4, 5, 6};
    miSet2 = {1, 2, 3};

    cout << subconjuntos(miSet1, miSet2);
    return 0;
}