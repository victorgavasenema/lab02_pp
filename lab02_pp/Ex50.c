#include <stdio.h>
int main()
{
    int anoatual, anodonascimento, idade1, idade2;
    printf("Escreva o ano do nascimento: ");
    scanf("%d", &anodonascimento);
    printf("Escreva o ano atual: ");
    scanf("%d", &anoatual);
    printf("A idade desta pessoa eh de %d, caso ja tenha feito aniversario e %d caso ainda nao tenha feito aniversario este ano", idade1=anoatual-anodonascimento, idade2=anoatual-anodonascimento-1 );
    return 0;
}