#include<stdio.h>
int main(){
	int a;
	do{
		printf("Por favor, introduzca un numero entero positivo: ");
		scanf(" %d", &a);	
	}while(a<0);
	 printf("\nEl numero %d al cuadrado es %d", a,a*a);
	return 0;
}
