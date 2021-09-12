/*Transmision de direcciones

Ejemplo: intercabiar el valor de dos variables
*/

#include<iostream>
using namespace std;
void intercambio(float *, float *);
int main(){
    float num1 = 20.8, num2 = 6.78;

    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;

    intercambio(&num1, &num2);

    cout<<"\n\nDespues del intercambio: "<<endl;
    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;
    
    return 0;
}

void intercambio(float *dirNum1, float *dirNum2){
    float aux;
    aux = *dirNum1;
    *dirNum1 = *dirNum2;
    *dirNum2 = aux;
}