//paso de paramatros tipo vector

#include<iostream>
#include<conio.h>
using namespace std;
void cuadrado(int vec[],int);
void muestra(int vec[],int);
int main(){
	const int tam = 5;
	int vec[tam] = {1,2,3,4,5};
	cuadrado(vec,tam);
	muestra(vec,tam);
	
	getch();
	return 0;
}

void cuadrado(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i] = vec[i] *vec[i];
	}
}
void muestra(int vec[],int tam){
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
