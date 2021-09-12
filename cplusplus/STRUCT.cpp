//una estructura es una coleccion de datos de diferente tpo, campos

//Estructura basioa en C++

#include<iostream>

using namespace std;

struct Persona{
    char nombre[20];
    int edad;
}
persona1 = {"Mohamed Lamdaghri", 20},
persona2 = {"Ana Lamelana", 19};

int main(){

    cout<<"Nombre 1: "<<persona1.nombre<<endl;
    cout<<"Nombre 2: "<<persona2.nombre<<endl;
    cout<<"Edad 1: "<<persona1.edad<<endl;

    Persona persona3;
    cout<<"Nombre: "<<endl;
    cin.getline(persona3.nombre,20,'\n');
    cout<<"Edad: "<<endl;
    cin>>persona3.edad;

    cout<<"Nombre 3: "<<persona3.nombre<<endl;
    cout<<"Edad 3: "<<persona3.edad<<endl;
    return 0;
}