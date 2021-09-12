/*Matrices Dinamicas
Ejemplo: Rellenar una matriz movil  de NxM y mostrar su contenido

**Puntero_matriz ->  *puntero_fila -> [int][int]
                     *puntero_fila -> [int][int]
                     *puntero_fila -> [int][int]
*/

#include<iostream>
#include<stdlib.h>
using namespace std;



int **puntero_matriz, nFilas, nColumnas; //un puntero que apunta a otro puntero fila
void pedirDatos();
void mostrarDatos(int **,int nFilas, int nColumnas);

int main(){
    
    pedirDatos();
    mostrarDatos(puntero_matriz, nFilas, nColumnas);

    //Vaciando la memoria tras haberla usado para la matriz
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;
    
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de filas: ";
    cin>>nFilas;
    cout<<"Digite el numero de columnas: ";
    cin>>nColumnas;

    puntero_matriz = new int*[nFilas]; //Reservndo memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz[i] = new int[nColumnas]; //Reservando memoria para las columnas
    }

    cout<<"\nDigite eelementos de la matriz: ";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nColumnas;j++){
            cout<<"Digit el elemento["<<i<<"]["<<j<<"]";
            cin>>*(*(puntero_matriz+i)+j);// lo mismo da poniendo esto puntero_matriz[i][j]
        }
    }
}

void mostrarDatos(int **puntero_matriz, int nFilas, int nColumnas){
    cout<<"\n\nImprimiendo matriz: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nColumnas;j++){
            cout<<*(*(puntero_matriz+i)+j);//puntero_matriz[i][j]
        }
        cout<<"\n";
    }
}