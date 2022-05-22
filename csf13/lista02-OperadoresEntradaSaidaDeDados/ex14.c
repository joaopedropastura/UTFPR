#include <stdio.h>

int main(void)
{
	int	cinquenta;
	int	cinco;
	int	um;
	int total;

	cinco = 5;
	cinquenta = 50;
	scanf("%i", &total);
	um = (total % cinco);
	cinco = (total % cinquenta)/5;
	cinquenta = total / 50;
	printf("R$ %i,00\n", total);
	printf("%i cédulas de R$ 50,00\n", cinquenta);
	printf("%i cédulas de R$ 5,00\n", cinco);
	printf("%i cédulas de R$ 1,00\n", um);

	return(0);
}
