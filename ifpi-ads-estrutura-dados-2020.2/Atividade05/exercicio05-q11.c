#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    char nome[100], primeiroNome[100], ultimoNome[100];
    int tam = 0, i = 0, j = 0;

    printf("Nome completo: ");
    fflush(stdin);
    gets(nome);
    tam = strlen(nome);
    while (nome[i] != ' ')
    {
        primeiroNome[i] = nome[i];
        i++;
    }
    primeiroNome[i] = '\0';

    // Pegar ultimo nome
    int posUltimoEspace = 0;
    for (j = tam; j >= 0; j--)
    {
        if (nome[j] == ' ')
        {
            posUltimoEspace = j;
            break;
        }
    }

    int k, x;
    for (k = posUltimoEspace + 1, x = 0; k < tam; k++, x++)
    {
        ultimoNome[x] = nome[k];
    }
    ultimoNome[x] = '\0';

    // Concatenar
    printf("%s/%s", ultimoNome, primeiroNome);
    return 0;
}