//Paso de parametros por referencia

#include<iostream>
#include<conio.h>
using namespace std;
//Manera dificil
void suma(int *n1,int *n2, int *n3);
//Manera facil
void suma2(int&,int&,int&);
int main(){

	int n4, n5, n6, n7;
	
	cout<<"digite dos numeros"<<endl; cin>>n4>>n5;
	
	suma(&n4,&n5,&n6);
	suma2(n4,n5,n7);
	
	
	cout<<"La suma es: "<<n6<<" y de manera mas facil "<<n7<<endl;
	
	
	getch();
	return 0;
}

void suma(int *n1,int *n2,int *n3){
	
	*n3 = *n1 + *n2;
}

void suma2(int& n1,int& n2,int& n3){
	n3 = n1 + n2;
}
