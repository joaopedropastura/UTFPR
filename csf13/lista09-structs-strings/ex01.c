#include <stdio.h>
#include <stdlib.h>

typedef struct s_time
{
	int horas;
	int minutos;
	int segundos;
}	t_time;

t_time converte(int seconds)
{
	t_time time;
	
	time.horas = seconds/3600;
	seconds = seconds % 3600;
	time.minutos = seconds/60;
	time.segundos = seconds%60;
	return(time);
}
int main()
{
	t_time time;
	int seconds;
	scanf("%i", &seconds);
	converte(seconds);
	printf("hours: %i\n", time.horas);
	printf("minutes: %i\n", time.minutos);
	printf("seconds: %i\n", time.segundos);

}
