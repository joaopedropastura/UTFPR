#include<stdio.h>

int main(void)
{
	int c;
	int bill;
	int valormin;
	int flagP;
	int flagM;
	int flagG;

	valormin = 7;
	scanf("%i", &c);
	if(c <= 10)
		bill = valormin;
	else if (c > 10 && c <= 30)
		bill = valormin + (c - 10);
	else if(c > 31 && c <= 100)
		bill = valormin + ((c - 20)* 2);
	else
		bill = valormin + ((c - 68)* 5);

	printf("o valor total da conta de água é R$ %i,00\n", bill);
	return(0);
}
