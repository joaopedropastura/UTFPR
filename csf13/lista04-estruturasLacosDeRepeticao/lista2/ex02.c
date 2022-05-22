#include <stdio.h>

int main(void)
{
	double input;
	double temp;
	double	media;
	int count;

	media = 0;
	count = 0;
	temp = 0;
	printf("digiite um numero por vez separando-os por enter: \n");
	scanf("%lf", &input);
	while (input != -1000)
	{
		temp += input;
		count++;
		printf("digiite um numero: ");
		scanf("%lf", &input);
	}
	media = temp/count;
	printf("( %i )valores positivos\n", count);
	printf("Media: %.2lf\n", media);
}
