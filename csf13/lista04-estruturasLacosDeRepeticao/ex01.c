#include<stdio.h>

int main(void)
{
	int imput;
	int i;
	int	result;

	result = 0;
	i = 1;
	scanf("%i", &imput);
	while(i < 11)
	{
		result = i * imput;
		printf("%i x %i = %i\n", imput, i, result);
		i++;
	}
	
	return(0);
}