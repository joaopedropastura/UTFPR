#include <stdio.h>

int main(void)
{
	int	monitores;
	int	alunos;

	printf("Digite o numero de alunos: ");
	scanf("%i", &alunos);
	printf("Digite o numero de monitores: ");
	scanf("%i", &monitores);

	if(monitores+alunos > 50)
		printf("Limite maximo de 50 pessoas por viagem ultrapassado :(\n");
	else
		printf("todos poderam ir em apenas 1 viagem :)\n");
	return(0);
}
