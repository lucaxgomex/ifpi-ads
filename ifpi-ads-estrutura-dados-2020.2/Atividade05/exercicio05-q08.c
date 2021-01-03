#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {

    char horario[9];

    printf("Horario no formato hh:mm:ss\n");
    fflush(stdin);
    gets(horario);
    
    // printf("%s", horario);

    // recebe hora e concatena
    char hora[3];
    char horaFrase[9] = " hora(s)";
    
    hora[0] = horario[0];
    hora[1] = horario[1];
    strcat(hora, horaFrase);
    printf("%s", hora);

    // recebe minuto e concatena
    char minuto[3];
    char minutoFrase[11] = " minuto(s)";

    minuto[0] = horario[3];
    minuto[1] = horario[4];
    strcat(minuto, minutoFrase);
    printf("%s", minuto);
    
    // recebe segundo e concatena
    char segundo[3];
    char segundoFrase[11] = " minuto(s)";

    segundo[0] = horario[6];
    segundo[1] = horario[7];
    strcat(segundo, segundoFrase);
    printf("%s", segundo);
    
    return 0;

}