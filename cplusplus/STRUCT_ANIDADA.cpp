//Estructuras Anidadas

#include<iostream>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
}empleados[2];

int main(){
    for(int i=0;i<2;i++){
        //Permite vaciar el buffer y digitar mas valoresssss
        cout<<"Introduzca los datos del empleado numero "<<i+1<<endl;
        cout<<"digite su nombre"<<endl;
        cin.getline(empleados[i].nombre,20,'\n');
        cout<<"Digite su direccion"<<endl;
        cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
        cout<<"Digite su ciudad"<<endl;
        cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
        cout<<"Digite su provincia"<<endl;
        cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
        cout<<"Digite su sueldo"<<endl;
        cin>>empleados[i].salario;
        cout<<"\n";
        fflush(stdin);  
    }
    //Imprimiendo
    for(int i=0;i<2;i++){
        cout<<"Mostrando los datos del empleado numero "<<i+1<<endl;
        cout<<"Nombre empleado: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Sueldo: "<<empleados[i].salario<<endl;
        cout<<"\n";
    }

    return 0;
}