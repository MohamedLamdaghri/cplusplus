#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <algorithm>


using namespace std;

int main ()
{
    string frase {"hola me llamo mohamed"};

    sort(frase.begin(), frase.end());

    cout <<frase <<endl;

}

