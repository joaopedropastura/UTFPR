#include <stdio.h>

int main(void)
{
	int	compMax;
	int num;
	int numAtual;
	int numAnterior;
	int result;
	int maxvalue;

	num = 1;
	result = 0;
	maxvalue = 0;
	numAnterior = 0;
	printf("digite o comprimento maximo do segmento: ");
	scanf("%i", &compMax);
	while(num <= compMax)
	{
		printf("digite o %i de %i do segmento: ", num, compMax);
		scanf("%i", &numAtual);
		if(numAnterior < numAtual)
		{
			result++;
			if(result > maxvalue)
				maxvalue++;
		}
		else
			result = 1;
		numAnterior = numAtual;
		num++;
	}
	printf("digite o comprimento maximo crescente eh: %i\n", maxvalue);

	return(0);
}
