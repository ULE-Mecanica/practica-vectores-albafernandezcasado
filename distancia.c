#include <stdio.h>
#include <math.h>
#define TAM 2
	
	void cargar (int v[2]);		
	float distancia(int v1[2], int v2[2]);


	int main()
	{
	int v1[2];int v2[2]; //declaro los dos vectores
	cargar (v1);
	cargar (v2);
	
	float de=(distancia(v1,v2));
	printf("%f", de);

	}


	void cargar (int v[2]) 
	{
	int i;
	for(i=0;i<TAM;i++)
	
	scanf("%d", &v[i]);
	
	}

	float distancia(int v1[2], int v2[2])
	{
	int resta1;
	int resta2;
	resta1= v2[0]-v1[0];
	resta2=v2[1]-v1[1];
	int raiz=sqrt(pow(resta1,2)+pow(resta2,2));

	return raiz;
	}
	


	
