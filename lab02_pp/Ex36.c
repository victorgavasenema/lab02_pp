#include <stdio.h>
int main()
{
    float r, v, h;
    printf("Escreva a altura e o raio do cilindro: ");
    scanf("%f%f", &h,&r);
    printf("O volume do cilindro eh: %f", v=(3.141592*(r*r))*h);
    return 0;
}