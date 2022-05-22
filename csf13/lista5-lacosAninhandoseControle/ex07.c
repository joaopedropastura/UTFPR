#include <stdio.h>

int main(void)
{
	int isTriangular;
	int inputValue;
	int a;
	int b;
	int c;
	int flag;

	flag = 0;
	a = 1;
	b = 2;
	c = 3;
	isTriangular = 0;
	scanf("%i", &inputValue);
	while(isTriangular != inputValue/2)
	{
		if (a * b * c == inputValue)
		{
			printf("sim pois %i*%i*%i = %i\n", a, b, c, inputValue);
			flag++;
			break;
		}
		a++;
		b++;
		c++;
		isTriangular++;
	}
	if(flag == 0)
		printf("nao\n");
	return(0);
}
