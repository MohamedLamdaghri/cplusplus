/*punteros - declaracion de punteros
&n = la direccion en memoria de n
*n = la variable almacenada en esa direccion de memoria
*/

#include<iostream>

using namespace std;
int main(){
	
	int num, *dir_num; //el puntero debe ser dedl mismo tipo de la varibale 
	num = 20;
	dir_num= &num;
	
	cout<<"Numero: "<<*dir_num<<endl; //se pone el asterisco para mostrar el valor en la dirrccion de memoria
	
	cout<<"direccion de memoria: "<<dir_num<<endl; //sin asterisco sale la direccion de memoria donde esta almacenada la variable
	
	//getch();//para que no finalice el programa hasta que el usuario toque una tecla.
	return 0;
	
}
