#include<stdio.h>

int main(void)
{
	int year;

	scanf("%i", &year);
	if (year%4 == 0)
		printf("Ano bissexto\n");
	else
		printf("Ano nao bissexto\n");
	return(0);
}
