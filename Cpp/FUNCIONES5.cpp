//PASO DE PARAMETROS TIPO MATRIZ
//Las matrcices y los vectores se pasan automaticamente por referencia

#include<iostream>
#include<conio.h>
using namespace std;

void mostrarMatriz(int mat[][3], int, int);//el numero de columnas es obligatorio ponerlo
void cuadradoMatriz(int mat[][3], int, int);
void mostrarMatrizElevada(int mat[][3], int, int);

int main(){
	const int nfilas = 2;
	const int ncol = 3;
	int m[nfilas][ncol] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,nfilas,ncol);
	cuadradoMatriz(m,nfilas,ncol);
	mostrarMatrizElevada(m,nfilas,ncol);
	
	
	getch();
	return 0;	
}


void mostrarMatriz(int mat[][3], int nfilas, int ncol){
	
	cout<<"Mostrando matriz original: "<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}	
}

void cuadradoMatriz(int mat[][3], int nfilas, int ncol){
	
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			mat[i][j] *= mat[i][j];
		}
		
	}	
}

void mostrarMatrizElevada(int mat[][3], int nfilas, int ncol){
	cout<<"\n\nMostrando matriz al cuadrado: "<<endl;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
}
