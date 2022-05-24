#include <stdio.h>
#include <stdlib.h>

int	*criaVetor(int tam, int lim)
{
	int	count;
	int *array;

	count = 0;
	while(tam != 0)
	{
		count = 0;
		array = (int *)malloc(lim * sizeof(int) + 1);
		while(count != lim)
		{

			array[count] = printf("%i", rand()% (lim + 1));
			count++;
		}
		array[count + 1] = printf("\n");
		tam--;
	}
	free(array);
	return(0);
}

int main(void)
{
	criaVetor(6, 3);
}