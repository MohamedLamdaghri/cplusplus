#include<stdlib.h>

void ref(int *n){
	*n = *n * *n;
	
}
int main(){
	int a=7;
	ref(&a);
	printf("%d", a);
	
	return 0;
	

	
	return 0;
}
