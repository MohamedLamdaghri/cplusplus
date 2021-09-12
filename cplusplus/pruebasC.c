#include<stdlib.h>


int vec[] = {1, 3 ,4 ,2 ,4};
char miNom[] = "Mohamed Lamdaghri";

int main(){
	int i, a=0;
	do {
      	printf("value of a: %d \n", a);
      	scanf(" %d", &a);
      	for(i=0;i<5;i++){
      		printf("%d \n", *(vec +i));
      	}
      	for(i=0;i<17;i++){
      		printf("%c", *(miNom +i));
      	}
      	
   } while( a < 0 );
	
	
	return 0;
}
