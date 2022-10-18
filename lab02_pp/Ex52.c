#include <stdio.h>
int main()
{
    //quantiadde a ser recebida por cada amigo
    float a1, a2, a3;
    //quantiade apostada por cada amigo
    float n1, n2, n3;
    //valor da premiação total
    float p;
    printf("Escreva o valor da premiacao: ");
    scanf("%f", &p);
    printf("Escreva o valor que o primeiro investiu: ");
        scanf("%f", &n1);
    printf("Escreva o valor que o segundo investiu: ");
        scanf("%f", &n2);
    printf("Escreva o valor que o segundo investiu: ");
        scanf("%f", &n3);
    printf("O valor que o primeiro recebra eh de: R$ %.2f\n", a1=(p/(n1+n2+n3))*n1);
    printf("O valor que o primeiro recebra eh de: R$ %.2f\n", a2=(p/(n1+n2+n3))*n2);
    printf("O valor que o primeiro recebra eh de: R$ %.2f\n", a3=(p/(n1+n2+n3))*n3);
    return 0;
}