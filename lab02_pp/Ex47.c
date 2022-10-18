#include <stdio.h>
#include <math.h>
int main()
{
    int numero, a, b, c, d;
    printf("Escreva um numero inteiro de 4 digitos: ");
    scanf("%d", &numero);
    a= numero%10;
    b= ((numero%100)-a)/10;
    c= (((numero%1000)-a)-b)/100;
    d= ((((numero)-a)-b)-c)/1000;
    printf("%d\n%d\n%d\n%d", d, c, b, a);
    return 0;
}