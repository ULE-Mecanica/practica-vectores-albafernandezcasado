#include <stdio.h>


	int main (){

	int a, i, fact=1;

	printf("Introduce un numero para hacer el factorial \n");
	scanf("%d", &a);

	

	for(i=1; i<=a; i++)
		
			fact = fact * i;

	printf("El factorial del %d es:%d \n", a, fact);

	return 0;

	
	 }
