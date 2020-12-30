#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "");

    // Criar matriz
    int count;
    printf("Ordem: ");
    scanf("%d", &count);

    int v[count][count];

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Valor: ");
            scanf("%d", &v[i][j]);
        }
    }

    // Calculus
    int linhaMaiorSoma = 0, linhaMenorSoma = 0, posMaiorLinha = 0, posMenorLinha = 0, somaAux = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            somaAux += v[i][j];
        }
        if (i == 0)
        {
            linhaMaiorSoma = somaAux;
            linhaMenorSoma = somaAux;
            posMaiorLinha = i;
            posMenorLinha = i;
        }
        else
        {
            if (somaAux > linhaMaiorSoma)
            {
                linhaMaiorSoma = somaAux;
                posMaiorLinha = i;
            }
            if (somaAux < linhaMenorSoma)
            {
                linhaMenorSoma = somaAux;
                posMenorLinha = i;
            }
        }
        somaAux = 0; // Zerar valor para poder somar novamente;
    }

    // Resultados;
    printf("\n---Resultados---\n");
    printf("\nSoma da MAIOR linha: %d\n", linhaMaiorSoma);
    printf("\nPosicao MAIOR linha: %d\n", posMaiorLinha);
    printf("\nSoma da Menor linha: %d\n", linhaMenorSoma);
    printf("\nPosicao MENOR linha: %d\n", posMenorLinha);

    system("pause");
    return 0;
}