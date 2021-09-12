/*1.escribe un programa que lea de la entrada estandar de dos numeros y e la salida
estandar si sumas, resta, multiplicacion y division.*/

#include<iostream>
using namespace std;
int main(){
	
	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2; 
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	cout<<"\n la suma es: "<<suma<<endl;
	cout<<"\n la resta es: "<<resta<<endl;
	cout<<"\n la multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\n la division es: "<<division<<endl;
	
	return 0;
}
