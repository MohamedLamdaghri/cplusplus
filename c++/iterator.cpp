#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <iterator>

using namespace std;

template <class A, class B>
ostream& operator<< (ostream &os, 
const pair<A, B> &v) {
os << v.first << ',' << v.second;
return os;
}
template <class B>
void print_collection (const B &ppio, 
const B &final) {
B it {ppio};
//cout << "Tam: " << ppio.size(); 
while (it != final) {
cout << *it << '|';
it = next(it); // ‘++it’ es posible, 
// aunque no siempre funciona
}
cout << '\n';
}
int main () {
vector<long> v {1,10,100,1000,10000};
long a[] {-1, -10, -100, -1000};
map<string, long> m {{"uno", 1},
{"dos", 2}, {"tres", 3}, {"cuatro", 4}};
print_collection (cbegin(v), cend(v));
print_collection (v.cbegin(), v.cend());
print_collection (cbegin(a), cend(a));
print_collection (crbegin(a), crend(a));
print_collection (begin(m), end(m));
auto it = rbegin(m);
advance(it,2); 
cout << *it << '|';
it = prev(it); 
cout << *it; 
}