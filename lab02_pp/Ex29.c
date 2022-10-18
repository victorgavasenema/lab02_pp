#include <stdio.h>
int main()
{
    float n1, n2, n3, n4;
    printf("Escreva 4 notas: ");
    scanf("%f%f%f%f",&n1, &n2, &n3, &n4);
    printf("A media aritmetica das notas eh: %f", (n1+n2+n3+n4)/4);
    return 0;
}