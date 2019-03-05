#include <stdio.h>
	int main ()


{	
	int n, m, i;
	
	printf("Introduzca n \n");
	scanf ("%d", &n);
		do{			//do ejecuta una insttruccion o bloque de instrucciones//		


	printf("Introduzca m \n");
	scanf("%d", &m);
} 		
	while (n>m); 

	int suma=0;
		for (i=m; i>=n; i--)
{

	 suma=suma+i;

}	 printf(" suma es %d \n", suma );
	


}
