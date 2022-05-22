#include <stdio.h>
#include <unistd.h>

int main(void)
{
	double	x;
	double	y;

	scanf("%lf %lf", &x, &y);
	if(x > 0 && y > 0)
		write(1, "Q1\n", 3);
	if(x > 0 && y < 0)
		write(1, "Q4\n", 3);
	if(x < 0 && y > 0)
		write(1, "Q2\n", 3);
	if(x < 0 && y < 0)
		write(1, "Q3\n", 3);
	if(x == 0 && y == 0)
		write(1, "Origem\n", 7);
	if(x == 0 && (y > 0 || y < 0))
		write(1, "Eixo Y\n", 7);
	if((y == 0 && x > 0 || x < 0))
		write(1, "Eixo X\n", 7);
	return(0);
}
