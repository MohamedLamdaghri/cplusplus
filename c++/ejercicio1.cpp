#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

//NUMERO PROFESOR: 968 32 5341

using namespace std;

ostream& operator<< (ostream &os, const set<int> &s) 
{
    for (const auto &i : s)
    {
        os << i << ", ";
    }
        
    return os;
}

set<int> union_set(set<int> s1, set<int> s2)
{
    for(auto i : s1)
    {
        s2.insert(i);
    }

    return s2;
}

int main()
{
    set<int> miSet1;
    set<int> miSet2;
    miSet1 = {1, 2, 3, 4, 5, 6};
    miSet2 = {2, 3, 4 ,5 ,6 ,7};
    
    cout << union_set(miSet1, miSet2) << endl;
    cout << miSet2;

    cout << "que pasa manin" << endl;

    return 0;
}
