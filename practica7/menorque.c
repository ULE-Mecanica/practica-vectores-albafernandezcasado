#include <stdio.h>


	void menor(int num1, int num2);

	int main()
{
	int a, b;

	printf("Añade un numero \n");
	scanf("%d", &a);

	printf("Añade otro numero \n");
	scanf("%d", &b);

	

if (a>b)
	printf("error \n");
		else{ 
			menor(a,b);}
	

	return 0;
}

	void menor(int num1, int num2)
	{
	int i;	
	for (i=num2; i>=num1;i--)

	{	
	if (i%2==0)
	printf("%8d", i);

}


}
