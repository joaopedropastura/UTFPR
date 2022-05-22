#include<stdio.h>

int main(void)
{
	int password;

	printf("Digite a senha:\n");
	scanf("%i", &password);
	while(password != 2002)
	{
		printf("Senha Invalida, digite novamente: \n");
		scanf("%i", &password);
	}
	printf("Acesso Permitido\n");
}
