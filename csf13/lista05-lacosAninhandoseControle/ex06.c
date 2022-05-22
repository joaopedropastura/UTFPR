#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x;
	int value;
	int valuePast;
	int flag1;
	int flag2;
	char *a;
	char *b;
	char *c;

	a = "ordenada de forma crescente";
	b = "ordenada de forma decrescente";
	c = "desordenada";
	flag1 = 0;
	flag2 = 0;
	valuePast = 0;
	scanf("%i", &x);
	srand(time(NULL));
	while(x != 0)
	{
		value = rand() % 100;
		printf("%i ", value);
		if(valuePast > value)
			flag1++;
		if(valuePast < value)
			flag2++;
		valuePast = value;
		x--;
	}
	if (flag1 == x)
		printf("%s\n", a);
	else if(flag2-1 == x)
		printf("%s\n", b);
	else
		printf("%s\n", c);
	return(0);
}
