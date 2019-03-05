#include <stdio.h>

int main()
{
	int d, h, m, s = 0;
	
	printf("Añade cantidad de segundos \n");
	scanf("%d", &s);

	d=s/86400;
	s=s%86400;

	h=s/3600;
	s=s%3600;

	m=s/60;
	s=s%60;

	

	printf("dias %d, horas %d, minutos %d, , segundos %d", d, h, m, s);

return 0;
}
