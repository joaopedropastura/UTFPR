#include<stdio.h>

int main(void)
{
	double n1;
	double n2;
	double n3;
	double result;

	scanf("%lf%lf%lf", &n1, &n2, &n3);
	n1 *= 2;
	n2 *= 3;
	n3 *= 5;
	result = (n1 + n2 + n3)/10;
	printf("media: %.1lf\n", result);
	return(0);
}
