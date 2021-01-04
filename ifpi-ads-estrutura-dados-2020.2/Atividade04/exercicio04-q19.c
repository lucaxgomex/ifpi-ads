// Exibicao de matrix - 19
#include <stdlib.h>
#include <stdio.h>

int main() {
    int vet[5][5], n = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            do {
                vet[i][j] = n;
            } while (j<=5);
        }
    }

    printf("\nExibir Matriz\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", vet[i][j]);
        }
        printf("\n");
    }
    return 0;
}