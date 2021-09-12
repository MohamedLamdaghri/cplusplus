/* transmision de arreglos
Ejemplo: Hallar el maximo elemento en un arreglo
*/

#include<iostream>
using namespace std;
int hallarMax(int *, int);
int main(){
    const int nElementos = 5;
    int numeros[nElementos] = {3,50,8,1};

    cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos)<<endl;

    return 0;
}

int hallarMax(int *dirVec, int tam){
    int max = 0;

    for(int i=0; i<tam;i++){
        if(*(dirVec+i)>max){ //el +1 es porque el puntero solo da la primera posicion del vector y hay que recorrerlo
            max = *(dirVec+i);
        }
    }
    return max;
}