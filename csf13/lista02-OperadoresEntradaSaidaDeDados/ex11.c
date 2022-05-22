#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	int b;
	int c;
	int result;

	scanf("%i%i%i", &a, &b, &c);
	result = (a + b +(abs(a - b)))/2;
	result = (result + c +(abs(result - c)))/2;
	printf("eh o maior: %i\n", result);
}
