#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "");

    int count;
    printf("Ordem da matriz: ");
    scanf("%d", &count);

    int vet[count][count], somaP = 0, somaN = 0;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            printf("Valor pos %d-%d: ", i, j);
            scanf("%d", &vet[i][j]);
            if (vet[i][j] >= 0)
            {
                somaP += vet[i][j];
            }
            else
            {
                somaN += vet[i][j];
            }
        }
    }

    printf("\nResultados\n");
    printf("\nSoma dos Positivos: %d\n", somaP);
    printf("\nSoma dos Negativos: %d\n", somaN);

    system("pause");
    return 0;
}