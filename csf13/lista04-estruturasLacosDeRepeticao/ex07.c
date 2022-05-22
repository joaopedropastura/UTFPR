#include <stdio.h>

int main(void)
{
	int x;
	int nextTerm;
	int f1;
	int f2;

	f1 = 1;
	f2 = 1;
	nextTerm = f1 + f2;
	printf("entre com o numero de termos: ");
	scanf("%i", &x);
	printf("Serie Fibonatti: 0, %d, %d, ", f1, f2);
	x -= 3;
	while(x != 0)
	{
		printf("%d, ", nextTerm);
		f1 = f2;
		f2 = nextTerm;
		nextTerm = f1 + f2;
		x--;
	}
	return(0);
}
