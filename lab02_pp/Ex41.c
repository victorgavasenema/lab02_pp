#include <stdio.h>
int main()
{
    int valor, horas;
    float salario;
    printf("Escreva o valor da hora de trabalho: ");
    scanf("%d", &valor);
    printf("Escreva as horas trabalhadas no mes: ");
    scanf("%d", &horas);
    salario=(valor*horas)*1.1;
    printf("Escreva as horas trabalhadas no mes:R$ %f", salario);
    return 0;
}