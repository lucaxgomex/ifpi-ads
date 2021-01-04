//Escrever data por extenso
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char data[100], gMes[3], gDia[3], gAno[5];
    int tam = 0;

    printf("Data DD/MM/AAAA: ");
    fflush(stdin);
    fgets(data, 100, stdin);

    tam = strlen(data);

    for (int i = 0; i < tam; i ++) {
        if (i == 0) {
            gDia[0] = data[i];
            gDia[1] = data[i + 1];
        }

        if (i == 3) {
            gMes[0] = data[i];
            gMes[1] = data[i + 1];
        }

        if (i == 6) {
            gAno[0] = data[i];
            gAno[1] = data[i + 1];
            gAno[2] = data[i + 2];
            gAno[3] = data[i + 3];
        }
    }

    printf("\nData:\n");

    if (strcmp(gMes, "01") == 0) {
        printf("%s de Janeiro de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "02") == 0) {
        printf("%s de Fevereiro de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "03") == 0) {
        printf("%s de Março de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "04") == 0) {
        printf("%s de Abril de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "05") == 0) {
        printf("%s de Maio de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "06") == 0) {
        printf("%s de Junho de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "07") == 0) {
        printf("%s de Julho de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "08") == 0) {
        printf("%s de Agosto de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "09") == 0) {
        printf("%s de Setembro de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "10") == 0) {
        printf("%s de Outubro de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "11") == 0) {
        printf("%s de Novembro de %s\n", gDia, gAno);
    }

    if (strcmp(gMes, "12") == 0) {
        printf("%s de Dezembro de %s\n", gDia, gAno);
    }

    return 0;
}