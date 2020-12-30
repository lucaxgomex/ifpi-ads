#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "");

    int count;
    printf("Ordem N: ");
    scanf("%d", &count);

    int vet[count][count];
    // criar vetor e inserir elementos
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Elementos pos ixj: ", i, j);
            scanf("%d", &vet[i][j]);
        }
    }

    // Soma diagonal principal
    int somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                somaDiagonalPrincipal += vet[i][j];
            }
        }
    }
    // Soma diagonal secundária
    printf("\nPrint diagonal Secundaria\n");
    int contador = count-1;
    for (int i = 0; i < count; i++)
    {
        somaDiagonalSecundaria += vet[i][contador];
        contador -= 1;
    }
    
    // Soma dos itens que não estão nas diagonais
    // TODO: fazer.

    // Resultados
    printf("\nSoma diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("\nSoma diagonal secundária: %d\n", somaDiagonalSecundaria);

    system("pause");
    return 0;
}