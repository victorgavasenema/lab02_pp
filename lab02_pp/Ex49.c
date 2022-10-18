#include <stdio.h>
#include <math.h>
int main()
{
    int start_horas, start_minutos, start_segundos;
    int tempo_descrito;

    printf("Escreva momento do inicio do experimento\nHoras:");
    scanf("%d", &start_horas);
    printf("Minutos: ");
    scanf("%d", &start_minutos);
    printf("Segundos: ");
    scanf("%d", &start_segundos);
    printf("Escreva o tempo de duracao do experimento em s: ");
    scanf("%d", &tempo_descrito);

        int horas, minutos, segundos;
    horas= (tempo_descrito/3600);
    minutos= ((tempo_descrito-(horas*3600))/60);
    segundos= (tempo_descrito-((horas*3600)+(minutos*60)));

        int end_horas, end_minutos, end_segundos;
    end_horas= start_horas +horas;
    end_minutos= start_minutos +minutos;
    end_segundos= start_segundos +segundos;

    printf("O experimento se encerrara as: %d horas %d minutos %d segundos", end_horas, end_minutos, end_segundos);
    return 0;
}