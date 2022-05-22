#include <stdio.h>

int main(void)
{
	double	celsius;
	double farenheit;

	scanf("%lf", &celsius);
	farenheit = ((celsius * 18)/10)+ 32;
	printf("%.1lf˚F\n", farenheit);
}
