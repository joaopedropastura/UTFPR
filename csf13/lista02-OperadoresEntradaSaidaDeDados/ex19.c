#include <stdio.h>

int main (void)
{
	double	mediaAluno;
	int		nota1;
	int		nota2;
	int		nota3;

	scanf("%i%i%i", &nota1, &nota2, &nota3);
	mediaAluno = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10.0;
	printf("%.2lf\n", mediaAluno);
	return (0);
}
