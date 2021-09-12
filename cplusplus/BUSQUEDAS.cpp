// Busqueda secuencial

#include<iostream>

using namespace std;

int main(){
    int a[] = {3, 6, 2, 1, 5, 4, 4};
    int i, dato;
    char band = 'F';

    //Busqueda secuencial
    i = 0;
    dato = 4;

    while((band=='F')&&(i<sizeof(a))){
        if(a[i]== dato){
            band = 'V';
        }
        i++;
    }
    
    if(band=='F'){
        cout<<"El numero no se encuentra en el array"<<endl;
    }
    else{
        cout<<"El numero se encuentra en el array en la posicion "<<i-1<<endl;
    }

    return 0;
}