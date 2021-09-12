#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;
bool es_vocal (const char c) {
    if ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u') { return true; }
    else { return false; }
}

string secuencia_vocales1 (const string &str) {
    int fin=0, longitud=0, max_long=0;
    const int tam = str.size();
    for (int i=0; imax_long) {
                fin=i;
                max_long=longitud;
            }
            longitud=0;
        }
    }
    if (longitud>max_long) {
        fin = tam;
        max_long = longitud;
    }
    return str.substr(fin-max_long,max_long);
}
string secuencia_vocales2 (const string &str) {
    string tmp, res;
    int max_long=0;
    const int tam = str.size();
    for (const auto & c : str) {
        if (es_vocal(c)) {
            tmp.push_back(c);
        } else {
            if (tmp.size()>max_long) {
                res = tmp;
                max_long = tmp.size();
            }   
            tmp.clear();
        }
    }
    if (tmp.size()>max_long) 
      { res = tmp;  }
    return res;
}

int main() {
    string ppio {"aeeeeeabcdeaiefghija"};
    string mitad {"abcdeaijaeeeeeakjlkhsdf"};
    string final {"abcdeaiefghijaeeeeea"};
    cout << "Version 1 ppio -> " << secuencia_vocales1 (ppio) << '\n';
    cout << "Version 2 ppio -> " << secuencia_vocales2 (ppio) << '\n';
    cout << "Version 1 mitad -> " << secuencia_vocales1 (mitad) << '\n';
    cout << "Version 2 mitad -> " << secuencia_vocales2 (mitad) << '\n';
    cout << "Version 1 final -> " << secuencia_vocales1 (final) << '\n';
    cout << "Version 2 final -> " << secuencia_vocales2 (final) << '\n';
    return 0;
}