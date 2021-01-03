#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    char palavra[100];
    int tam = 0;
    printf("Palavra: ");
    fflush(stdin);
    gets(palavra);
    tam = strlen(palavra);
    // printf("%s\n", palavra);
    // printf("Tamanho: %d", tam);
    // Adicionar verificador para as 2 ultimas letras da palavra

    for (int i = 0; i < tam - 2; i++)
    {
        printf("%c", palavra[i]);
    }
    printf("o");
    return 0;
}