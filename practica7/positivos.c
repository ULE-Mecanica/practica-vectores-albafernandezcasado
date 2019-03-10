#include <stdio.h>
#include <math.h> 

	int positivo(int num1, int num2);

	int main()
{
	int a,b, potencia;

	printf("Añade un numero \n");
	scanf("%d", &a);

	printf("Añade otro numero \n");
	scanf("%d", &b);

	
	if ((a<0) || (b<0))
		printf("error \n");

	else
{potencia=positivo(a,b);
printf("%d", potencia);}
	return 0;
}

	int positivo(int num1, int num2)
{
int resultado=pow (num1,num2);
return resultado;
}
	
