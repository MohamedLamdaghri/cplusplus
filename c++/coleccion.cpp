#include <string>
#include <iostream>
using namespace std;


std::string datos (const std::string &str) {
return "(c: " + std::to_string(str.capacity()) + 
", s:" + std::to_string(str.size()) + ')';
}
int main() {
string str {"Programacion en tiempo real"}; // ctor
string subr (str.size(), '='); // ctor
cout << str << "(c: " << str.capacity()
<< (str.empty()? ", Empty)": ", no Empty)") 
<< endl;
cout << subr << datos (subr) << endl; 
string sub_str {str, 5, 10}; // ctor
cout << sub_str << datos (sub_str) << endl;
str.front() = 'p';
++str.back();
str[1] = 'R';
str.at(5) = '9';
cout << str << datos (str) << endl;
string str2 = "Asignatura: " + str;
cout << str2 << datos (str2)<< endl;
str2.assign(5, '*');
cout << str2 << datos (str2) << endl;
str2.assign("Hola mundo!");
cout << str2 << datos (str2) << endl;
str2 = "Programacion en tiempo real";
cout << str2 << datos (str2) << endl;
std::swap (str2, subr);
cout << subr << endl << str2 << endl;
string formula="Area circulo: pi*r2 , \u03C0·r\u00B2";
cout << formula << endl; 
}