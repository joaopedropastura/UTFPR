#include <stdio.h>

int main(void)
{
	long long int input;
	long long int i;

	scanf("%lli", &input);
	i = input - 1;
	while(i != 0)
	{
		input *= i;
		i--;
	}
	printf("%lli\n", input);
	return(0);
}
