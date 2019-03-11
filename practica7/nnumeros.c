#include <stdio.h>

	int nnumeros(int num);

	int main()
{
	int a, suma;

	printf("Añade un numero \n");
	scanf("%d", &a);

	
	if (a<0)
		printf("El numero es negativo \n");
			
			else 
				{nnumeros(a); 
				suma=nnumeros(a);
				printf("La suma de los %d primeros numeros es : %d. \n", a, suma);}
	return 0;

}
	
	int nnumeros(int num)
	{
	int i;int suma=0;
	
	for(i=1; i<=num; i++)
		

	suma=suma+i;
	return suma;
		}
