/* la sentencia switch

    switch(expresion){
        case literal 1:
            conjunto de instrucciones 1;
            break;
        case literal 2:
            conjunto de instrucciones 2;
            break;
            .
            .
            .
        case literal n;
            conjunto de instrucciones n;
            break;
        deafault:
            conjunto de instrucciones por defecto;
            break;
    }
*/
#include<iostream>
using namespace std;

int main(){
    int numero;

    cout<<"digitame un numero entre 0 y 5: "<<endl; cin>>numero;

    switch(numero){
        case 1: cout<<"Es el numero 1"; break;
        case 2: cout<<"Es el numero 2"; break;
        case 3: cout<<"Es el numero 3"; break;
        case 4: cout<<"Es el numero 4"; break;
        case 5: cout<<"Es el numero 5"; break; 
        default: cout<<"No esta en el rango 1-5"; break;
    }

/*si los 3 o 4 primeros casos tienen la misma salida que el 4, con poner la 
salida en el 4 y omitir los breaks basta, no hay qu ecopiar la misma salide en los 3 o 4 casos igual*/
    return 0;
}