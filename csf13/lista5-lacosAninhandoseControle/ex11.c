#include <stdio.h>

int main(void)
{
	int initial;
	int quant;
	int test;
	int count;
	int primos;

	test = 1;
	count = 0;
	primos = 0;
	scanf("%i", &initial);
	scanf("%i", &quant);
	if(initial == 1)
		initial++;
	while(primos != quant)
	{
		while(test != initial)
		{
			if(initial%test == 0)
				count++;
			test++;
		}
		if(count < 2)
		{
			primos++;
			printf("%i ", initial);
		}
		test = 1;
		count = 0;
		initial++;
	}
	return(0);
}
