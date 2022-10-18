#include <stdio.h>
#include <math.h>
int main()
{
    float hdegrau, hescada;
    float degraus;
    printf("Escreva a altura do degrau: ");
    scanf("%f", &hdegrau);
    printf("Altura que deseja chefar com a escada: ");
    scanf("%f", &hescada);
    degraus=hescada/hdegrau;
    printf("A quantidade de degraus a ser subida eh: %.f", ceil(degraus));
    return 0;
}