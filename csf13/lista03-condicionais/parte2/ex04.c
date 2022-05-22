#include<stdio.h>

int main(void)
{
	int	a;
	int	b;
	int c;
	int	result;

	scanf("%i%i%i", &a, &b, &c);
	if(a != 0 && b != 0 && c != 0)
	{
		if((c > (a + b)) || (a > (c + b)) || (b > (c + a)))
			printf("Nao eh um triangulo\n");
		else if(a == b && a == c)
			printf("Triangulo equilatero\n");
		else if(a == b || b == c || a == c)
			printf("Triangulo isosceles\n");
		else
			printf("Triangulo escaleno\n");
	}
	return(0);
}
