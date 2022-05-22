#include <stdio.h>

int main(void)
{
	int init;
	int end;
	int impar;
	int x;

	printf("Digite o maior valor\n");
	scanf("%i", &end);
	printf("Digite o menor valor\n");
	scanf("%i", &init);
	
	impar = -1;
	if(init%2 == 0)
		impar = 0;
	while(init < end)
	{
		if(init%2 == 1)
		{
			impar++;
		}
		init++;
	}
	printf("A quantidade de numeros impares eh: \n%i\n", impar);
	return(0);
}