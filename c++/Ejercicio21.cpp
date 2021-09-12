#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include <iterator>

using namespace std;

vector<double> solucion(const string &str)
{
    vector<double> tmp {0,0,0}; 
    int p=0, u, num=0;
    do 
    {
        p = str.find("X: ", p) + 3;
        u = str.find("Y: ", p);
        tmp[0] += stod(str.substr(p, u-p));
        p=u+3;
        u = str.find("Z: ", p);
        tmp[1] += stod(str.substr(p, u-p));
        p=u+3;
        u = str.find("\n", p);
        tmp[2] += stod(str.substr(p, u-p));
        ++num;
    } while (u!=str.size()-1);

    tmp[0] /= num;
    tmp[1] /= num;
    tmp[2] /= num;
    return tmp;
}

int main ()
{
    string gps {"X: 1 Y: 2 Z: 3\nX: 10 Y: 20 Z: 30\nX: 100 Y: 200 Z: 300\n"};
 
    vector<double> resultado = solucion(gps);

    for(auto a : resultado)
    {
        cout << a << "  ";
    }    

    
    return 0;
}