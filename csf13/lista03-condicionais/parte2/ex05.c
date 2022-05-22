#include <stdio.h>

int main(void)
{
	double	alcool;
	double	gasoline;
	double	aRange;
	double	gRange;
	double	result;
	double	result1;

	printf("digite o preco do litro: gasolina\n");
	scanf("%lf", &gasoline);
	printf("digite o consumo do veiculo com a gasolina\n");
	scanf("%lf", &gRange);
	printf("digite o preco do litro: alcool\n");
	scanf("%lf", &alcool);
	printf("digite o consumo do veiculo com a alcool\n");
	scanf("%lf", &aRange);

	result = gRange/gasoline;
	result1 = aRange/alcool;
	if (result1 > result)
		printf("A\n");
	else
		printf("G\n");

	return(0);
}
