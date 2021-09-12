//CORRESPONDENCIA ENTRE ARRAYS Y PUNTEROS

#include<iostream>

using namespace std;
int main(){
	int numeros[] = {3,4,6,7,7};
	int *dir_numeros;
	dir_numeros = &numeros[0]; // equivalente a dir_numeros = numeros;
	for (int i=0; i<5;i++){
		cout<<"Elemento del vector: ["<<i<<"]: "<<*dir_numeros++<<endl;
		cout<<"Posicion de memoria para el componente: "<<i<<" es: "<<dir_numeros<<endl;
	}
	 
	
	
	return 0;
}
