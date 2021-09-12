//Punteros a estructuras

#include<iostream>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona;
void PedirDatos();
void mostrarDatos(Persona *);
int main(){
    PedirDatos();
    mostrarDatos(puntero_persona);


    return 0;
}

void PedirDatos(){
    cout<<"Digiteme tu nombre: "<<endl;
    cin.getline(puntero_persona->nombre,30,'\n');//Guardando en el puntero
    cout<<"Digiteme tu edad: "<<endl;
    cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
    cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
    cout<<"\nSu edad: "<<puntero_persona->edad<<endl;
}