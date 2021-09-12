/*2. Realice un programa que lea de la entrada estandar los siguentes datos de 
una persona
	Edad: dato de tipo entero.
	Sexo: dato de tipo caracter.
	Altura: dato de tipo real.

Tras leer los datos, el programa debe mostrarlos en la salida estandar.*/

#include<iostream>
using namespace std;
 
 int main(){
 	int edad;
 	char sexo[10]; //le estamos dadno una dimension de 10 caracteres
 	float altura;
 	
 	cout<<"digite su edad: "; cin>>edad;
 	cout<<"digite sus sexo: "; cin>>sexo;
 	cout<<"digite su altura: "; cin>>altura;
 	 
 	cout<<"\n Edad: "<<edad; 
 	cout<<"\n Sexo: "<<sexo;
 	cout<<"\n Altura: "<<altura;
 	
 	return 0;
 }
