#include <stdio.h>

int main(void)
{
    double pi;
    int raio;
    double result;
    double aux;

    pi = 3.14159;
    scanf("%i", &raio);
    aux = raio * raio;
    raio *= aux;
    result = (pi * raio * 4) /3.0;
    printf("%.3lf\n", result);

    return(0);
}