#include <stdio.h>

int main(void)
{
    float   n1;
    float   n2;
    float   aux;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);
        printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    aux = n1 + n2;
    printf("%.2f\n", aux);

}