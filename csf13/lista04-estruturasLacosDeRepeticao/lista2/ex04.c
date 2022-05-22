#include <stdio.h>

int main(void)
{
	int n1;
	int n2;
	int x;
	int y;
	int mmc;
	int result;

	printf("Digite os dois numeros a serem calculados o MMC, separando-os por virgula\n");
	scanf("%i,%i", &n1, &n2);
	result = 0;
	mmc = 2;
	x = 1;
	y = 1;
	while(n1+n2 != 2)
	{
		while(n1 % mmc == 0 || n2 % mmc == 0)
		{
			if(n1 % mmc == 0)
			{
				n1 /= mmc;
				x *= mmc;
			}
			if(n2 % mmc == 0)
			{
				n2 /= mmc;
				y *= mmc;
			}
		}
		mmc++;
	}
	result = y*x;
	printf("%i\n", result);
	return(0);
}
