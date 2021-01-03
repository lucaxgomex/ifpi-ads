#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{

    setlocale(LC_ALL, "");

    char nome[30], caractere, recebe[30], invertida[30];
    // char vogal[] = {'a', 'e', 'i', 'o', 'u'};

    printf("Nome: ");
    fgets(nome, 30, stdin);

    // scanf("%s", &nome);

    int tam = strlen(nome);
    printf("Tamanho: %d\n", tam);
    //
    // printf("%c", nome[0]);
    printf("\n");
    for (int i = 0; i < tam; i++)
    {
        caractere = nome[i];
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u')
        {
            recebe[i] = caractere;
        }
        else
        {
            recebe[i] = '#';
        }
    }

    // Inverter
    int tamRecebida;
    int k = 0;

    tamRecebida = strlen(recebe);

    for (int i = tamRecebida - 1; i >= 0; i--)
    {
        invertida[k] = recebe[i];
        k++;
    }

    printf("%s", invertida);

    return 0;
}
// Não tenho certeza se está correta.