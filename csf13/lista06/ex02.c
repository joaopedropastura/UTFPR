#include <stdio.h>

int main(void)
{
	int numPalindromo;
	int num1;
	int num2;
	int result;
	int temp;

	num2 = 999;
	num1 = 999;
	numPalindromo = 0;
	while(numPalindromo != 1)
	{
		result = num1*num2;
		temp = result%100;
		printf("%i\n", temp);
		if(temp < 10)
			temp *= 10;
		if(result/100 == (temp%10 + temp/10))
		{
			numPalindromo = 1;
		}
		if(num1 >= 900)
			num1--;
			if(num1 == 900)
			{
				num1 = 999;
				num2--;
			}
	}
	printf("%i\n", result);
	return(0);
}
