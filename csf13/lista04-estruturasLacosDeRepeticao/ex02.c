#include<stdio.h>

int main(void)
{
	int i;
	int	imput;

	i = 0;
	scanf("%i", &imput);
	while(i != 100)
	{
		if(i%imput == 2)
			printf("%i\n", i);
		i++;
	}
	return(0);
}