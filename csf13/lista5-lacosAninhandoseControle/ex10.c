#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 1;
	j = 1;
	printf("%i\n", i);
	while(i != -1)
	{
		while(i % j == 0)
		{
			if(j == 20)
			{
				printf("%i\n", i);
				i = -2;
				break;
			}
			j++;
		}
		j = 1;
		i++;
	}
	return(0);
}
