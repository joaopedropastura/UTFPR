#include <stdio.h>

int main(void)
{
	int chico;
	int ze;
	int anos;

	chico = 150;
	ze = 110;
	while (chico > ze)
	{
		chico+= 2;
		ze+= 3;
		anos++;
	}
	printf("levara:( %i ) anos\n", anos);
	return(0);
}
