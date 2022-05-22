#include <stdio.h>

int main(void)
{
	int input;
	int a;
	int b;
	int c;
	int i;
	i = 1000;
	while(i != 9999)
	{
	a = i % 100;
	b = i / 100;
	c = a + b;
	if(c * c == i)
		printf("%i, ", i);
	i++;
	}
	printf("\n");
	return(0);
}
