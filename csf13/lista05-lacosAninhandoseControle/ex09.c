#include <stdio.h>

int main(void)
{
	int t;
	int primo;
	int count;
	int ehPrimo;
	int soma;

	primo = 1;
	count = 0;
	soma = 0;
	scanf("%i", &t);
	while(t != 0)
	{
		while(primo != t)
		{
			if(t%primo == 0)
				count++;
			primo++;
		}
		if(count < 2)
		{
			soma += t;
		}
		primo = 1;
		count = 0;
		t--;
	}
	printf("%i\n", soma);
	return(0);
}
