#include <stdio.h>
#include <math.h>
int main()
{
    int segundos, minutos, horas, tempo_descrito;
    printf("Escreva tempo em segundos: ");
    scanf("%d", &tempo_descrito);
    horas= (tempo_descrito/3600);
    minutos= ((tempo_descrito-(horas*3600))/60);
    segundos= (tempo_descrito-((horas*3600)+(minutos*60)));
    printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);
    return 0;
}