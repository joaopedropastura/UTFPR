#include <stdio.h>

int main(void)
{
	int	x;
	int y;

	scanf("%i %i", &x, &y);
	if((x >= 0 && x <= 432) && (y >= 0 && y <= 468))
	printf("d\n");
	else
	printf("f\n");

	return(0);
}
