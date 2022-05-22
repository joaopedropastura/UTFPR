#include <stdio.h>

int main(void)
{
	int seconds;
	int minutes;
	int hours;
	int days;
	int timetotal;

	days = 86400;
	hours = 3600;
	minutes = 60;
	scanf("%i", &timetotal);
	seconds = timetotal % minutes;
	minutes = (timetotal % hours)/minutes;
	hours = (timetotal % days)/hours;
	days = timetotal / days;

	printf("%i dias\n", days);
	printf("%i horas\n", hours);
	printf("%i minutos\n", minutes);
	printf("%i segundos\n", seconds);
	return(0);
}
