//Listassss

#include<iostream>
#include<stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguente;
};


void menu();
void insertarLista(Nodo *&, int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int);
void eliminarNodo(Nodo *&, int);
void eliminarLista(Nodo *&, int &);


Nodo *lista = NULL;


int main(){

    menu();
    return 0;
}


void menu(){
    int opcion, dato;

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar elementos de la lista\n";
        cout<<"3. Buscar elemento en lista\n";
        cout<<"4. Eliminar elemento de la lista\n";
        cout<<"5. Vaciar la lista\n";
        cout<<"6. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:cout<<"\nDigite un numero: ";
                   cin>>dato;
                   insertarLista(lista, dato);
                   cout<<"\n";
                   system("pause");
                   break;

            case 2: mostrarLista(lista);
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\nDigite un numero a buscar: ";
                    cin>>dato;
                    buscarLista(lista, dato);
                    cout<<"\n";
                    system("pause");
                    break;
            case 4: cout<<"\nDigite el elemento a eliminar: ";
                    cin>>dato;
                    eliminarNodo(lista, dato);
                    cout<<"\n";
                    system("pause");
                    break; 
            case 5: cout<<"Se han eliminado los siguentes elementos, la lista esta vacia.\n";
                    while(lista !=NULL){
                        eliminarLista(lista, dato);
                        cout<<dato<<" -> ";
                    }
                    cout<<"\n";
                    system("pause");
                    break;        
        }
        system("cls");
    }while(opcion !=6);
}

//Insertar un elemento en la lista
void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL)&&(aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }

    else{
        aux2->siguente = aux1;
    }
    nuevo_nodo->siguente = aux1;
    cout<<"\tElemento "<<n<<" inssertado en Lista correctamente"<<endl;
}

//Mostrar los elementos de la lista
void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual = actual->siguente;
    }
}

//Buscar un elemento en la lista
void buscarLista(Nodo *lista, int n){
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;

    while((actual != NULL)&&(actual->dato <=n)){
        if(actual->dato == n){
            band = true;
        }
        actual = actual->siguente;
    }

    if(band == true){
        cout<<"Elemento "<<n<<" ha sido encontrado en la Lista\n";
    }
    else{
        cout<<"Elemento "<<n<<" no ha sido encontrado en la Lista\n";
    }
}

//Eliminar un elemento de la lista
void eliminarNodo(Nodo *&lista, int n){
    if(lista != NULL){
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;

        while((aux_borrar != NULL)&&(aux_borrar->dato != n)){
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguente;
        }

        if(aux_borrar == NULL){
            cout<<"El elemento "<<n<<" no exites en la Lista";
        }
        else if(anterior == NULL){
            lista = lista->siguente;
            delete aux_borrar;
        }
        else{
            anterior->siguente = aux_borrar->siguente;
            delete aux_borrar;
        }
    }
}

//Dejar vacia la lista
void eliminarLista(Nodo *&lista, int &n){
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguente;
    delete aux;
}
