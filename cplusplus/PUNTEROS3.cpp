/*Asignacion dinamica de arreglos

new: Reserva el numero de bytes solicitado por la declaracion
delete: libera un bloque de bytes reservado con anterioridad

Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un arreglo
*/

#include<iostream>
#include<stdlib.h> //La necesito para usar new y delete
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif; //vaciando la memoria del arreglo dinamico
    return 0;
}


void pedirNotas(){
    cout<<"Digite el numero de calificaciones"<<endl;
    cin>>numCalif;

    calif = new int[numCalif];

    for(int i=0;i<numCalif;i++){
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\n\nMostrando notas del Usuario:\n";
    for(int i=0;i<numCalif;i++){
        cout<<calif[i]<<endl;
    }
}