#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;
bool es_impar(const int &i) { return i&1; }
bool es_par(const int &i) { return not es_impar(i); }
bool f (const int &i) { return (i > 5 && i < 17); }
void imp (const int &i) { cout << i << ','; }
int main() {
vector<int> v{{2, 4, 6, 8, 10}}, 
v_M5_m17(v.size());
cout << "Entre los numeros: ";
for_each(cbegin(v), cend(v), imp);
cout << '\n';
if (all_of(cbegin(v), cend(v), es_par))
{ cout << "Todos son pares\n"; }
if (none_of(cbegin(v), cend(v), es_impar))
{ cout << "Ninguno es impar\n"; }
copy_if(cbegin(v), cend(v), begin(v_M5_m17), f);
// La colección de destino tiene que tener
// suficiente espacio para acomodar los elementos
for_each(cbegin(v_M5_m17), cend(v_M5_m17), imp);
cout << '\n';
sort(begin(v), end(v));
for_each(cbegin(v), cend(v), imp);
cout << '\n';
sort(rbegin(v), rend(v));
for_each(cbegin(v), cend(v), imp);
return 0;
}