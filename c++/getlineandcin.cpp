#include <iostream>
#include <string>
using namespace std;
int main() {
int a;
cout << "1 numero? >>> ";
cin >> a;
string str1, str2, str3;
cout << "2 palabras? >>> ";
cin >> str1; cin >> str2;
cout << "Str1: " <<str1<< ", str2: "
<< str2<< '\n';
cout << "1 frase? >>> ";
//getline(cin, str3); // (1)
//getline(cin>>ws, str3); // (2)
cout << "Str3: " << str3 << '\n';


cout << "3 palabras? >>> ";
cin >> str1; cin >> str2;
cout << "Str1: " << str1
<< ", str2: " << str2 << '\n';
cin >> str3;
cout << "\t y quedaba para Str3: "
<< str3 << '\n';
}

