#include <stdio.h>
int main()
{
    float n, soma;
    printf("Escreva um numero ");
    scanf("%f",&n);
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh: %f", soma=(((3*n)+1)+((2*n)-1)));
    return 0;
}