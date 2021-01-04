//Condicao entre dois vetores
#include <stdlib.h>
#include <stdio.h>

int main() {
    int q = 0;

    printf("Quantidade de elementos: ");
    scanf("%d", &q);

    int vetA[q], vetB[q], e;

    for (int i = 0; i < q; i++) {
        // Adicionando elementos em A
        printf("Pos %d > ", i);
        scanf("%d", &vetA[i]);

        // Verificar se par ou impar
        if (vetA[i] % 2 == 0) {
            vetB[i] = 0;
        } else {
            vetB[i] = 1;
        }
    }

    // Exibindo resultados
    printf("\nVetores\n");
    printf("Vetor A\n");
    for (int j = 0; j < q; j++) {
        printf("%d", vetA[j]);
    }

    printf("\nVetor B\n");
    for (int k = 0; k < q; k++) {
        printf("%d", vetB[k]);
    }

    printf("\n");

    return 0;
}