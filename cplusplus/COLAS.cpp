/*Colas: una cola es una estructura de datos, caracterizada por ser una
secuencia de elementos en la que la operacion de insercion se realiza por 
un extremos y la extraccion por otro
fifo -> first imput first output
push añadir pop quitar
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&, Nodo *&, int);
void suprimirCola(Nodo *&, Nodo *&, int &);
bool cola_vacia(Nodo *);

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato;

    cout<<"\nDigite un numero: ";
    cin>>dato;
    insertarCola(frente, fin, dato);

    cout<<"\nDigite un numero: ";
    cin>>dato;
    insertarCola(frente, fin, dato);

    cout<<"\nDigite un numero: ";
    cin>>dato;
    insertarCola(frente, fin, dato);


    cout<<"\n\nSacando los elementos de la Cola: ";
    while(frente != NULL){
        suprimirCola(frente, fin, dato);
        if(frente != NULL){
            cout<<dato<<",";
        }
        else{
            cout<<dato<<".";
        }

    }

    return 0;
}

//Funcion para añadir elementos a una Cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;
        fin = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout<<"\nElemento "<<n<<" insertado con exito en la Cola"<<endl;
}

//Funcion para eliminar elementos de la Cola
void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux = frente;

    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->siguiente;
    }
    delete aux;
}

 //Funcion para determinar si la cola esta vacio o no
 bool cola_vacia(Nodo *frente){
     /*if(frente == NULL){
         return true;
     }
     else{
         return false;
     }*/
     return (frente == NULL)? true : false;
 }