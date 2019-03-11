#include <stdio.h>

	int divisores(int num);

	int main()
{	
	int a;
    int cont;
	printf("Añade un numero \n");
	scanf("%d", &a);
	
	cont=divisores(a);
	printf("%d tiene %d divisores \n",a,cont);
 
}

	int divisores(int num)
{
		int i, b;
	for(i=1; i<=num; i++)
		{

		if (num%i==0)
           {
	        	b++;
		        printf("%d es divisor de : %d \n", i,num); } }
return(b);}
