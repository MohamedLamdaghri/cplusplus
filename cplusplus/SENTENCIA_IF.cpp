/* La sentencia if 
if(condicion){
    intrusccion 1;
}
else{
    intruccion 2;
}

tambien es posble:
if(condicion){
    intrusccion 1;
}
else if{
    intruccion 2;
}
else{
    intruccion 3;
}
*/

#include<iostream>
using namespace std;
int main(){
    int numero, dato = 5;
    cout<<"Digete un numero: "<<endl; cin>>numero;
    if (numero == dato){
        cout<<"el numero es 5"<<endl;
        cout<<"chupame el pingo"<<endl;
    }
    else{
        cout<<"mamame la verga, no es cinco"<<endl;
    }
    return 0;
}
