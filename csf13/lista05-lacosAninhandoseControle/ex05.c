#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x;
	int value;
	int valuePast;
	int flag;

	flag = 0;
	valuePast = 0;
	scanf("%i", &x);
	srand(time(NULL));
	while(x != 0)
	{
		value = rand() % 100;
		printf("%i ", value);
		if(valuePast > value)
			flag++;
		valuePast = value;
		x--;
	}
	if (flag >= 1)
		printf("nao\n");
	else
		printf("sim\n");
	return(0);
}
