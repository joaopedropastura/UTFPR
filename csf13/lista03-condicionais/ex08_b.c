#include<stdio.h>

int main(void)
{
	int monthBorned;
	int yearBorned;
	int dayBorned;
	int age;

	printf("Digite a data que voce nasceu, ex: 01/04/1999 \n");
	scanf("%i/%i/%i",&dayBorned, &monthBorned, &yearBorned);
	age = ((dayBorned)+(((monthBorned+1)*26)/10)+(yearBorned%100)+((yearBorned%100)/4)+(yearBorned/100)+(5*(yearBorned/100)));
	age = age % 7;
	printf("%i\n", age);
}
