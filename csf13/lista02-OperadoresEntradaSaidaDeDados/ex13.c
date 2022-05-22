#include <stdio.h>

int main(void)
{
	int		distance;
	double	fuel;
	double	totalLiters;

	scanf("%i%lf", &distance, &fuel);
	totalLiters = (distance / fuel);
	printf("%.3lf km/l\n", totalLiters);

	return(0);
}
