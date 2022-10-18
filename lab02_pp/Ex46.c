#include <stdio.h>
#include <math.h>
int main()
{
    int numero, a, b, c;
    int inverso;
    printf("Escreva um numero de 3 digitos: ");
    scanf("%d", &numero);
    a= numero%10;
    b= ((numero%100)-a)/10;
    c= (((numero%1000)-a)-b)/100;
    printf("%d%d%d", a, b, c);
    return 0;
}