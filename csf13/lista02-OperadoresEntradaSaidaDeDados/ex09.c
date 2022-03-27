#include<stdio.h>

int main(void)
{
    int result;
    int height;
    int base;
    
    scanf("%i%i", &base, &height);
    result = ((height * 2)+(base * 2));
    printf("%i\n", result);

    return(0);
}