//metodo burbuja

#include<iostream>

using namespace std;
int main(){
    int numero[5] = {3, 5, 2, 1, 4};
    int i, j, aux;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(numero[j] > numero[j+1]){
                aux = numero[j];
                numero[j] = numero[j+1];
                numero[j+1] = aux;
            }

        }
    }
    cout<<"orden descendente"<<endl;
    for(int a=4;a>=0;a--){
        cout<<numero[a]<<endl;
    }
    return 0;
}