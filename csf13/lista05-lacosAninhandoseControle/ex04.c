#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int input;
	int soma;

	i = 1;
	j = 1;
	soma = 1;
	scanf("%i", &input);
	while(i <= input)
	{
		printf("%i ", i);
		while (j <= i)
		{
			soma = j*i;
			printf("%i ", soma);
			j++;
		}
		printf("\n");
		j = 1;
		i++;
	}
	return(0);
}
