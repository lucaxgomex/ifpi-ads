//Maior e menos elemento de uma matriz
#include <stdlib.h>
#include <stdio.h>

int main() {
    int count;

    printf("Informe a ordem da matriz: ");
    scanf("%d", &count);

    int vet[count][count];
    int maior = 0, menor = 0, posMaiorL = 0, posMaiorC = 0, posMenorL = 0, posMenorC = 0;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            printf("Valor para a POS: %d-%d\n", i, j);
            scanf("%d", &vet[i][j]);

            if (i == 0 && j == 0) {
                maior = vet[i][j];
                posMaiorL = i;
                posMaiorC = j;
                menor = vet[i][j];
                posMenorL = i;
                posMenorC = j;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            if (vet[i][j] > maior) {
                maior = vet[i][j];
                posMaiorL = i;
                posMaiorC = j;
            }

            if (vet[i][j] < menor) {
                menor = vet[i][j];
                posMenorL = i;
                posMenorC = j;
            }
        }
    }

    printf("\nResultados\n");
    printf("Maior Numero: %d na Pos %d-%d\n", maior, posMaiorL, posMaiorC);
    printf("Menor Numero: %d na Pos %d-%d\n", menor, posMenorL, posMenorC);

    return 0;
}