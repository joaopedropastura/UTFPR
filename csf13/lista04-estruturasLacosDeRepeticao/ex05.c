#include <stdio.h>
#include <math.h>

int main(void)
{
	int input;
	int temp;
	int result;
	int count;

	scanf("%i", &input);

	result = 0;
	count = 1;
	while(count < input)
	{
		if(input % count == 0)
			result += count;
	count++;
	}
	if (result == input)
		printf("%i eh um numero perfeito\n", input);
	else
		printf("%i nao eh um numero perfeito\n", input);
	return(0);
}
