#include <stdio.h>

int main(void)
{
	int	inputDays;
	int years;
	int months;
	int days;

	years = 0;
	months = 0;
	days = 0;
	scanf("%i", &inputDays);
	while (inputDays != 0)
	{
	if (imputDays >= 365)
	{
		years++;
		inputDays -= 365;
	}
	if (inputDays >= 30)
	{
		months++;
		inputDays -=30;
	}
		days++;
		inputDays--;
	}
	
	printf("%i ano(s)\n", years);
	printf("%i mes(es)\n", months);
	printf("%i dia(s)\n", days);
	return (0);
}
