#include<iostream>
using namespace std;
int main(){
    int suma = 0, numero[10] = {3, 5, 3, 6, 9, 1, 3, 5, 2, 1};
    for(int i = 0; i<10; i++){
        suma += numero[i];
    }
    cout<<suma<<endl;


    return 0;
}