#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool checkIfRepeated(const string &str)
{
    if (str.empty()) 
        return false;
    const auto tam = str.size(), tam_1 = tam -1; 
    for (int i=0; i<tam_1; ++i) 
    {
        for (int j=i+1; j<tam; ++j)
        {
            if (str[i] == str[j]) 
                return false;
        }
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