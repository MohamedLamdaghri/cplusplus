#include<iostream>

using namespace std;

int main(){
	cout << true << " | " << boolalpha << true << endl;
	int d = 42; int o = 052;
	int x = 0x2a, X = 0X2A;
	int b = 0b101010;
	char c = 'a';
	long entero = 1'090'345; cout << entero << "  " << c << "  " << b << "  " << x << endl;
	double real = 1'234e5;

	entero = static_cast<long>(real);
	cout << entero;


}