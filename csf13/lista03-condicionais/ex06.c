#include <stdio.h>

int main(void)
{
	int	delta;
	int	b;
	int	c;
	int	raiz1;
	int	raiz2;
	int	a;

	scanf("%i%i%i", &a, &b, &c);
	delta = (b*b) - (4*a*c);
	if (delta < 0)
	{
		printf("raízes imaginárias\n");
		return(0);
	}
	raiz1 = b*-1 + delta/a*2;
	raiz2 = b*-1 - delta/a*2;
	printf("raiz1: %i\n", raiz1);
	printf("raiz2: %i\n", raiz2);
	return(0);
}
