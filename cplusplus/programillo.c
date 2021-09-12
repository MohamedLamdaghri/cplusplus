#include<stdlib.h>
#include<math.h>
int main(){
	float a, b, c;
	printf("Introduce a: ");
	scanf(" %f", &a);
	printf("\nIntroduce b: ");
	scanf(" %f", &b);	
	printf("\nIntroduce c: ");
	scanf(" %f", &c);
	((b*b-4*a*c)>=c ? printf("\n\nr1=%f; r2=%f", (-b+sqrt(b*b-4*a*c))/(2*a),
	(-b-sqrt(b*b-4*a*c))/(2*a)) :
	printf("\nLa variable es compleja.\n"));
	
	system("pause");
	return 0;
} 
