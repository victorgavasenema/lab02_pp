#include <stdio.h>
int main()
{
    float n1, n2, n3;
    printf("Escreva 3 numeros: ");
    scanf("%f%f%f",&n1, &n2, &n3);
    printf("A soma dos quadrados eh: %f", (n1*n1)+(n2*n2)+(n3*n3));
    return 0;
}