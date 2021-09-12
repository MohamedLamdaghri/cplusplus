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


set<int> diferencia(set<int> s1, set<int> s2)
{
    for (const auto &ss : s1) 
    {
        if (s2.count(ss) != 0) 
        {
            s1.erase(ss);
            s2.erase(ss);
        }
    }

    for (const auto &ss : s2) 
    {
        s1.insert(ss);
    }

    return s1;
}
int main()
{
    set<int> miSet1;
    set<int> miSet2;
    miSet1 = {1, 2, 3, 4, 5, 6};
    miSet2 = {9, 0, 0 ,8 ,6 ,0};

    cout << diferencia(miSet1, miSet2 ) << endl;

    return 0;
}