#include <iostream>
#include <sstream>
using namespace std;
int main() {
string datos {"tiempo 77 real 3.14"};
string salida;
istringstream is {datos};
ostringstream os {salida, ios_base::ate}; // ate --> at-the-end
string txt; int ent; double r;
is >> txt; is >> ent;
os << ent << " " << txt;
cout << "os: " << os.str() << '\n';
cout << "Txt: |" << txt << "| int: " << ent;
is >> txt; is >> r;
cout << "\nTxt2: |" << txt << "| double: " << r;
return 0;
}