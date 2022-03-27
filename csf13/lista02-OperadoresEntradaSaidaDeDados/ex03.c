#include <stdio.h>

    int main(void) 
{
    char    str;
    int     num;
    float   dec;

    printf("Digite um caractere: ");
    scanf("%c",&str);
    printf("Digite um numero inteiro: ");
    scanf("%i",&num);
    printf("Digite um numero decimal: ");
    scanf("%f",&dec);

    printf("%c\n%i\n%.2f\n", str, num, dec);
    return(0);
}