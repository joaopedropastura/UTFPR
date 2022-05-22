#include <stdio.h>

int main(void)
{
	int input;
	int temp;
	int	numMax;

	temp = 1;
	numMax = 0;
	printf("digiite um numero por vez separando-os por enter: \n");
	scanf("%i", &input);
	while (input > 0)
	{
		printf("digiite um numero: ");
		scanf("%i", &input);
		if(temp > input)
			numMax = temp;
		temp = input;
	}
	printf("%i eh o maior numero\n", numMax);
}
