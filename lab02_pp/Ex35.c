#include <stdio.h>
#include <math.h>
int main()
{
    float h, c1, c2;
    printf("Escreva o valor dos catetos: ");
    scanf("%f%f",&c1,&c2);
    c1= pow(c1,2);
    c2= pow(c2,2);
    h= sqrt (c1+c2);
    printf("A hipotenusa eh: %f", h);
    return 0;
}