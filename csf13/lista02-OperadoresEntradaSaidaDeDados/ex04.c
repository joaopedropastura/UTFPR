#include <stdio.h>

int main(void)
{
    char    str;
    int     num;
    float   dec;

    printf("Digite um numero inteiro: ");
    scanf("%i",&num);
    printf("Digite um caractere: ");
    scanf(" %c",&str);
    printf("Digite um numero decimal: ");
    scanf("%f",&dec);

    printf("%i\n%c\n%.2f\n", num, str, dec);
    return(0);
}