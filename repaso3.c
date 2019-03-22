#include <stdio.h>


int main() 
{
			
	int password;
 	int i;
	

	for(i=0; i<3; i++) //Ejecuto unicamente 3//
	{  

		printf("INTRODUZCA SU CONSTASEÑA \n");
		scanf("%d", &password);

		if(password > 4567)
		{

			printf("ERROR MAYOR \n");
		}
 
		if(password < 4567)
		{	
			printf("ERROR MENOR \n");
		}
		
		if(password == 4567)
		{
			printf("CONTRASEÑA CORRECTA \n"); 
			break;
		}
	} 

	
}

