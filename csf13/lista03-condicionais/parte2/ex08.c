#include <stdio.h>

int main (void)
{
	int	hWindow;
	int wWindow;
	int aBox;
	int bBox;
	int cBox;

	scanf("%i%i%i%i%i", &aBox, &bBox, &cBox, &hWindow, &wWindow);

	if((hWindow >= 1 && hWindow <= 100) && (wWindow >= 1 && wWindow <= 100) && \
	(aBox >= 1 && aBox <= 100) && (bBox >= 1 && bBox <= 100) && (cBox >= 1 && cBox <= 100))
		printf("s\n");
	else
		printf("n\n");
}
