#include <stdio.h>
#include <math.h>

int main(void)
{
	int password;
	int input;
	int count;
	count = 0;
	password = rand() % 500;
	printf("%i\n", password);
	scanf("%i", &input);
	while(input != password)
	{
		scanf("%i", &input);
		count++;
	}
	if(count < 4)
		printf("\\o/\n");
	if(count > 3 && count < 7)
		printf(":-D\n");
	if(count > 6 && count < 11)
		printf(":-)\n");
	if(count > 10)
		printf(":-\\\n");
	return(0);
}
