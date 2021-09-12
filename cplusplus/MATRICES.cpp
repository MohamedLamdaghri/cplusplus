/*1. Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas
 y de columnas, porteriormente mostrar la matriz en pantalla*/

 #include<iostream>
 using namespace std;

 int main(){
     int numeros[100][100], filas, columnas;

     cout<<"digitame el numero de filas y luego el de columnas"<<endl;
     cin>>filas; cin>>columnas;
     for(int i=0;i<filas;i++){
         for(int j=0;j<columnas;j++){
            cout<<"digite un numero"<<endl;
            cin>>numeros[i][j];

         }
     }
     cout<<"La matriz introducida es: "<<endl;
     for(int i=0;i<filas;i++){
         for(int j=0;j<columnas;j++){
            cout<<" "<<numeros[i][j]<<" ";  

         }
        cout<<"\n";
     }   
     return 0;
 }