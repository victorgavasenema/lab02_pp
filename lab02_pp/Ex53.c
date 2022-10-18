#include <stdio.h>
int main()
{
    float c, l, p;
    printf("Escreva o comprimento e a largura do terreno: ");
    scanf("%f%f", &c, &l);
    printf("Escreva o preco do metro quadrado de tela: ");
    scanf("%f", &p);
    printf("O custo para cercar o terrno eh de: R$ %.2f", p=l*c);
    return 0;
}