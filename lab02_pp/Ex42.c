#include <stdio.h>
int main()
{
    float salbase, salfinal;
    printf("Escreva o salario base: ");
    scanf("%f", &salbase);
    salfinal= (salbase*1.05)-(salbase*0.07);
    printf("O salario do funcionario eh de: R$ %f", salfinal);
    return 0;
}