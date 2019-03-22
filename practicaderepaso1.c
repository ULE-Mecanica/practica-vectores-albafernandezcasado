#include <stdio.h>


int multiplicacion (int num1, int num2);
int main() 
{
			
	int a,b,c;

	printf("Dame un numero \n");
	scanf("%d", &a);

	printf("Dame otro nunero \n");
	scanf("%d", &b);
	

	c=multiplicacion(a,b); //lamada a multiplicaion
	printf("El resutado de multiplicar %d * %d es %d \n",a,b,c);


}


int multiplicacion (int num1, int num2)
{
	int i;
	int resultado=0;

	for(i=0; i<num2; i++) //Ejecuto tantas veces como indica num1//
	{  
		resultado = resultado + num1; //Incremento la variable resultado en a//

	} 

	return resultado;
}

	



