/*Pila: una pila es una estructura de datos de entradas ordenadas tales
que solo se pueden introducir y eliminar por un extremo llamado cima.
el primero en salir es el ultimo en entrar
lifo last input first output
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, int n);
void sacarPila(Nodo *&pila, int &n);

int main(){
    Nodo *pila = NULL;
    int n1;
    

    cout<<"Digite un numero: ";
    cin>>n1;
    agregarPila(pila, n1);

    
    cout<<"Digite un numero: ";
    cin>>n1;
    agregarPila(pila, n1);

    cout<<"\nSacando los elementos de la pila: ";
    while(pila != NULL){
        sacarPila(pila, n1);
        if(pila != NULL){
            cout<<n1<<",";
        }
        else{
            cout<<n1<<".";
        }

    }

    return 0;
}

//Funcion para agregar elementos a la Pila
void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
    cout<<"Elemento "<<n<<" agregado a Pila correctamente"<<endl;
}

//Funcion para eliminar elementos de la Pila
void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}