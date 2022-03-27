#include <stdio.h>

int main(void)
{
    int n1;
    int n2;
    double media;
    

    scanf("%i%i", &n1, &n2);
    media = (n1 + n2)/2.0;
    
    printf("%.2lf\n", media);

    return(0);
}