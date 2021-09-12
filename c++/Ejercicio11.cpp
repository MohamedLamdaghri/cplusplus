#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <sstream>
#include <iterator>

using namespace std;

string mama(string str, int num)
{
    int cont = 0;
    string aux, palabra;
    for(char a : str)
    {
        if(a == ' ')
        {
            if(cont > num)
            {
                aux += palabra;
                aux += ' '; 
            } 
            palabra.clear();
            cont = 0;           
        }
        else
        {
            palabra += a;
            cont++;
        }
    }

    if(cont > num)
    {
        aux += palabra;
    }
    return aux;
}

int main ()
{
    string datos; int nume;
    cout <<"Introduzca la cadena"<<endl;
    getline(cin>>ws, datos, '\n');
    cout << "Introduzca el numero de caracteres" << endl;
    cin >> nume;
    cout << mama(datos, nume);
    

    return 0;
}