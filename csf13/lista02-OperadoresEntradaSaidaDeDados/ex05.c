#include <stdio.h>

int main(void)
{
    int i1;
    int i2;
    int rest;
    int divs;

    scanf("%i%i", &i1, &i2);
    rest = i1 % i2;
    divs = i1 / i2;
    printf("%i\n%i\n", rest, divs);

}