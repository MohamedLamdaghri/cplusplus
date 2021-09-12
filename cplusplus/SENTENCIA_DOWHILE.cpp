/* la sentencia do while:

    do{
        conjunto d einstrucciones;
    }while(expresion logica);

*/
//el do while primero actua y luego piense, y el while piensa y luego actua
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int i;
    i = 10;
    do{
        cout<<i<<endl;
        i--;
    }while(i>=1);
    system("pause");
    return 0;
}