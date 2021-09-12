#include <stdio.h>
void elevar_al_cubo (int *npp);
int variable_global = 3;
int main () {
	int c = 5;
	elevar_al_cubo (&c); elevar_al_cubo (&variable_global);
 	printf("5 al cubo=%d, 3 al cubo=%d \n", c, variable_global);
 	return 0;
}
void elevar_al_cubo (int *npp) {

	 *npp = *npp * *npp * *npp;
} 
