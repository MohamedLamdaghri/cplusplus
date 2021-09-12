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
vector<string> vs;
vs.reserve(15);
string str = "string 1";
vs.push_back(str);
vs.emplace_back("string 2");
vs.emplace_back(10, '*');
print_collection(begin(vs), 
end(vs));
vs.emplace(begin(vs), "primero");
print_collection(begin(vs), 
end(vs));
vs.emplace(end(vs), "ultimo");
print_collection(begin(vs), 
end(vs));
str.assign("en medio");
auto it2 = begin(vs);
advance(it2,2);
it2 = vs.insert(it2, str);
print_collection(begin(vs), 
end(vs));
print_collection(it2, end(vs));
}