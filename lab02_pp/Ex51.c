#include <stdio.h>
#include <math.h>
int main()
{
    float xa, ya, resultado;
    printf("Defina um valor x e um y no plano cartesiano: ");
    scanf("%f%f", &xa,&ya);
    resultado= sqrt(pow(xa,2)+pow(ya,2));
    printf("A dsitancia dos dois pontos eh de: %f", resultado);

    return 0;
}