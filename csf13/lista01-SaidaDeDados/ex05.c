#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char	c;

	c = 'A';
	while(c < 'D')
	{
		printf("%c, ", c + 32);
		c++;
	}
	printf("%c\n", c + 32);
	return (0);
}
