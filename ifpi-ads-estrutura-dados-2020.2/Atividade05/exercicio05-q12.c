#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    char nome[100], ultimoNome[100], nomeImpresso[100];
    int tam = 0;

    printf("Nome: ");
    fflush(stdin);
    gets(nome);

    tam = strlen(nome);

    // Pega ultimo nome
    int posUltimoEspace = 0, j;
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

    strcat(ultimoNome, ", ");

    // concatenar siglas
    for (int i = 0; i < tam; i++)
    {
        if ( nome[i] == ' ' )
        {
            strcat(ultimoNome, nome[i]);
            strcat(ultimoNome, nome[i+1]);
            strcat(ultimoNome, ".");
        }
        
    }
    

    strcat(nomeImpresso, ultimoNome);
    printf("%s", nomeImpresso);

    return 0;
}