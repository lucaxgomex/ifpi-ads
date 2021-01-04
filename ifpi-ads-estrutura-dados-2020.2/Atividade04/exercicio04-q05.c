#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{

    setlocale(LC_ALL, "");

    int vet[8];

    printf("Inserir valores no vetor 0 ou 1\n");
    for (int i = 0, c = 0; i < 8; i++, c++)
    {
        printf(">>>");
        scanf("%d", &vet[i]);
        // int v = pow(2, c);
        // printf("\nValor de C>, %d", c);
        // printf("\n2 ** %d", v);
    }

    // Converter para binario
    int decimal = 0;
    for (int i = 8 - 1, c = 0; i >= 0; i--, c++)
    {
        // printf("%d", vet[i]);
        int v = pow(2, c);
        if (vet[i] == 1)
        {
            decimal += v;
        }
        // printf("\nValor de C>, %d", c);
        // printf("\n2 ** %d", v);
    }

    printf("\nValor de binário para decimal: %d\n", decimal);

    // Binário para hexadecimal

    system("pause");
    return 0;
}