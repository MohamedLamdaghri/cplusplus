#include<stdio.h>
int main(void){
	int a; char b; double c;
	printf("Variable a: ");
	scanf(" %d",&a);
	printf("Variable b: ");
	scanf(" %c",&b);
	printf("Variable c: ");
	scanf(" %lf",&c);
	
	printf("a = %d\nb = %c\nc = %lf\n",a,b,c);
	return 0;
}
