#include<stdio.h>
#include<time.h>

int main(void)
{
	int month;
	int yearBorned;
	int age;
	struct tm *data_atual;
	time_t localMonth;

	time(&localMonth);
	data_atual = localtime(&localMonth);
	printf("Digite o mes e o ano que voce nasceu, ex: 04/1999 \n");
	scanf("%i/%i", &month, &yearBorned);
	age = data_atual->tm_year+1900;
	age -= yearBorned+1;
	if(month < data_atual->tm_mon+1)
		age++;
	printf("Sua idade e: %i anos\n", age);
	return(0);

}
