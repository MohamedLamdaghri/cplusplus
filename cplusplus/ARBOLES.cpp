/*Un arbol consta de un conjunto finito de elementos, denominados nodos
y un conjunto finito de lineas dirigidas, denominadas ramas, que conectan
los nodos.
Arbol Binario: tiene un maximo de dos hijos, rapapa.
Arbol binario de busqueda: Es aquel que dado un nodo, todo los datos del subarbol 
izquierdo son menores, mientras que los del subarbol derecho son mayores.
*/ 

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

//Protoripos
void menu();
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool buscarDato(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *minimo(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

Nodo *arbol = NULL;

int main(){
    menu();
    return 0;
}


//Menu eleganton, bacan
void menu(){
    int dato, opcion, cont=0;
    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Mostrar arbol completo"<<endl;
        cout<<"3. Buscar un elemento en el arbol"<<endl;
        cout<<"4. Recorrer el arbol en PreOrden"<<endl;
        cout<<"5. Recorrer el arbol en InOrden"<<endl;
        cout<<"6. Recorrer el arbol en PostOrden"<<endl;
        cout<<"7. Elimnar un nodo del arbol"<<endl;
        cout<<"8. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1: cout<<"\nDigite un numero: ";
                    cin>>dato;
                    insertarNodo(arbol, dato, NULL); 
                    cout<<"\n";
                    break;
            case 2: cout<<"\nMostrando el arbol completo"<<endl;
                    mostrarArbol(arbol, cont);
                    cout<<"\n";
                    break;
            case 3: cout<<"\nDigite el elemento a buscar: ";
                    cin>>dato;
                    if(buscarDato(arbol, dato)){
                        cout<<"El elemento "<<dato<<" se encuentra en el arbol.";
                    }
                    else{
                        cout<<"El elemento "<<dato<<" NO se encuentra en el arbol.";
                    }
                    cout<<"\n";
                    break;
            case 4: cout<<"\nRecorriendo el arbol en PreOrden"<<endl;
                    preOrden(arbol);
                    cout<<"\n";
                    break;
            case 5: cout<<"\nRecorriendo el arbol en InOrden"<<endl;
                    inOrden(arbol);
                    cout<<"\n";
                    break;
            case 6: cout<<"\nRecorriendo el arbol en PostOrden"<<endl;
                    postOrden(arbol);
                    cout<<"\n";
                    break;
            case 7: cout<<"\nDigite el nodo a eliminar: ";
                    cin>>dato;
                    eliminar(arbol,dato);
                    cout<<"\n";
                    break;
        }
    }while(opcion != 8);
}

//Funcion para crear un nuevo nodo
Nodo *crearNodo(int n, Nodo *padre){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;
}

//Funcion para insertar nodos en el arbol
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
    if(arbol == NULL){
        Nodo *nuevo_nodo = crearNodo(n, padre);
        arbol = nuevo_nodo;
    }

    else{
        int valorRaiz = arbol->dato;
        if(n < valorRaiz){
            insertarNodo(arbol->izq,n,arbol);
        }
        else{
            insertarNodo(arbol->der,n,arbol);
        }
    }
    cout<<"\nEl dato "<<n<<" ha sido introducido en el arbol correctamente\n";
}

//Funcion para mostrar todos los elemntos del arbol
void mostrarArbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }
    
    else{
        mostrarArbol(arbol->der, cont+1);
        for(int i=0;i<cont;i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrarArbol(arbol->izq, cont+1);
    }
}

//Busca un elemento en el arbol
bool buscarDato(Nodo *arbol, int n){
    if(arbol == NULL){
        return false;
    }
    else if(n == arbol->dato){
        return true;
    }
    else if(n < arbol->dato){
        buscarDato(arbol->izq, n);
    }
    else{
        buscarDato(arbol->der, n);
    }
}

//Recorrer el arbol en PreOrden
void preOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

//Recorrer el arbol en InOrden
void inOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

//Recorrer el arbol en PostOrden
void postOrden(Nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

//Funcion para eliminar un nodo del arbol
void eliminar(Nodo *arbol, int n){
    if(arbol == NULL){
        return;
    }
    else if(n < arbol->dato){
        eliminar(arbol->izq,n);
    }
    else if(n > arbol->dato){
        eliminar(arbol->der,n);
    }
    else{
        eliminarNodo(arbol);
    }

}

//Funcion para eliminar el nodo encontrado
void eliminarNodo(Nodo *nodoEliminar){
    if(nodoEliminar->izq && nodoEliminar->der){
        Nodo *menor = minimo(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    else if(nodoEliminar->izq){
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    else if(nodoEliminar->der){
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    else{
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}

//Funcion para determinar el nodo mas izquierdo
Nodo *minimo(Nodo *arbol){
    if(arbol == NULL){
        return NULL;
    }
    if(arbol->izq){
        return minimo(arbol->izq);
    }
    else{
        return arbol;
    }
}

//Funcion para reemplazar dos nodos
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
    if(arbol->padre){
        //arbol->padre hay que asignarle su nuevo hijo
        if(arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        //Procedemos a asihnarle su nuevo padre
        nuevoNodo->padre = arbol->padre;
    }
}

//Funcion para destruir el nod encontrado
void destruirNodo(Nodo *nodo){
    nodo->izq = NULL;
    nodo->der = NULL;

    delete nodo;
}