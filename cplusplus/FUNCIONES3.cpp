//Devolver valores multiples


#include<iostream>

using namespace std;
void calcular(int, int,int&,int&);
int main(){
	int n1, n2, suma = 0, multiplicacion = 0;
	cout<<"digite dos numeros"<<endl; cin>>n1>>n2;
	calcular(n1,n2,suma,multiplicacion);
	cout<<"La suma es: "<<suma<<" y la multiplicacion es "<<multiplicacion<<endl;
	return 0;
}

void calcular(int x, int y ,int& suma,int& producto){
	suma = x + y;
	producto = x * y;
	
}

