//Cadenas de caracteres

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[] = "Mohamed";
    char nombre[30];
    cout<<"digite su nombre";
    //gets(nombre); //almacena la cadena completa, no importa que ocupe mas espacio del que le pertenece
    cin.getline(nombre,20,'\n'); //best opcion
    cout<<nombre;

    return 0;
}