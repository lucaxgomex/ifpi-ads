#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    char data[100], gMes[3], gDia[3], gAno[5];
    int tam = 0;

    printf("Data DD/MM/AAAA: ");
    fflush(stdin);
    gets(data);

    tam = strlen(data);

    for (int i = 0; i < tam; i++)
    {
        if (i == 0)
        {
            gDia[0] = data[i];
            gDia[1] = data[i + 1];
        }
        if (i == 3)
        {
            gMes[0] = data[i];
            gMes[1] = data[i + 1];
        }
        if (i == 6)
        {
            gAno[0] = data[i];
            gAno[1] = data[i + 1];
            gAno[2] = data[i + 2];
            gAno[3] = data[i + 3];
        }
    }

    if (strcmp(gMes, "01") == 0)
    {
        printf("%s De janeiro De %s", gDia, gAno);
    }
    if (strcmp(gMes, "02") == 0)
    {
        printf("%s De Fevereiro De %s", gDia, gAno);
    }
    if (strcmp(gMes, "03") == 0)
    {
        printf("%s De Março De %s", gDia, gAno);
    }
    if (strcmp(gMes, "04") == 0)
    {
        printf("%s De Abril De %s", gDia, gAno);
    }
    if (strcmp(gMes, "05") == 0)
    {
        printf("%s De Maio De %s", gDia, gAno);
    }
    if (strcmp(gMes, "06") == 0)
    {
        printf("%s De Junho De %s", gDia, gAno);
    }
    if (strcmp(gMes, "07") == 0)
    {
        printf("%s De Julho De %s", gDia, gAno);
    }
    if (strcmp(gMes, "08") == 0)
    {
        printf("%s De Agosto De %s", gDia, gAno);
    }
    if (strcmp(gMes, "09") == 0)
    {
        printf("%s De Setembro De %s", gDia, gAno);
    }
    if (strcmp(gMes, "10") == 0)
    {
        printf("%s De Outubro De %s", gDia, gAno);
    }
    if (strcmp(gMes, "11") == 0)
    {
        printf("%s De Novembro De %s", gDia, gAno);
    }
    if (strcmp(gMes, "12") == 0)
    {
        printf("%s De Dezembro De %s", gDia, gAno);
    }

    return 0;
}