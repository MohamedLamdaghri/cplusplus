//Funciones

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion
int encontrarMax(int x, int y);


int main(){
	
	int n1, n2;
	
	cout<<"digite dos numeros"<<endl; cin>>n1; cin>>n2;
	
	cout<<"El numero mayor es: "<<encontrarMax(n1,n2)<<endl;
	
	system("pause");
	
	return 0;
}

//Definicion de funcion
int encontrarMax(int x, int y){
	int numMax;
	if(x>y){
		numMax = x;
	}
	else{
		numMax = y;
	}
	return numMax;
}
