#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char	nbr;

	nbr = 'A';
	while(nbr < 'D')
	{
		printf("%i, ", nbr);
		nbr++;
	}
	printf("%i\n", nbr);
}
