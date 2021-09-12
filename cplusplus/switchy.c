#include<stdlib.h>
#include<stdio.h>
void switchy(int n);
int main(){
	int a;
	do{
	    printf("Introduzca un numero: ");
	    scanf(" %d", &a);
	    switchy(a);
	}while(a>0);
	system("pause");
	return 0;
}

void switchy(int n){
switch(n){
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9: printf("me cago en tus muertos\n"); break;
	case 10: printf("me cago en tu madre\n"); break;
	default: printf("me cago en tu padre\n");
}

}
