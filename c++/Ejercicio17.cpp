#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main ()
{
    string valores {"1.23,4.56,5.87,8.98,3.98"};
    istringstream is {valores};
    double aux;
    char ap;

    map<int, int> m;
     m[5] = 17;
    // for(int i = 0; i < 5 ; i++)
    // {
    //     is >> aux;
    //     is >> ap;
    //     cout << aux <<  " ";
    // }
    // cout << " j";
    cout << m[5] << endl;

    return 0;
}