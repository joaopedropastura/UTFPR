#include <stdio.h>

int main(void)
{
    int     kmPerLiters;
    double  fuel;
    int     tax;
    int     totaltax;
    double  distance;
    double  result;

    scanf("%lf%i", &distance, &totaltax);
    tax = 8;
    fuel = 2.60;
    kmPerLiters = 15;
    result = (distance / kmPerLiters);
    result *= fuel;
    result += (tax * totaltax);

    printf("O valor total gasto eh: R$ %.2lf\n", result);
}