#include <stdio.h>
#include <stdlib.h>

int	**tabuleiro(int tam)
{
	int	count;
	int *array;
	int width;

	width = tam;
	count = 0;
	while(tam != 0)
	{
		count = 0;
		array = (int *)malloc(tam * sizeof(int) + 1);
		while(count != width)
		{

			array[count] = rand() % 2;
			count++;
		}
		array[count + 1] = printf("\n");
		tam--;
	}
	return(array);
}

int main(void)
{
	tabuleiro(3);
}