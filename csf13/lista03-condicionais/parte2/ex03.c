#include<stdio.h>

int main(void)
{
	int	num;
	int cem;
	int dez;
	int uni;

	scanf("%i", &num);

	if(num >= 100 && num <= 999)
	{
		cem = num / 100;
		cem *= cem * cem;
		dez = num / 10;
		dez = dez % 10;
		dez *= dez * dez;
		uni = num % 10;
		uni *= uni * uni;
	}
	if(num == uni+dez+cem)
		printf("O numero eh Armstrong\n");
	else
		printf("Nao eh um numero Armstrong\n");
}
