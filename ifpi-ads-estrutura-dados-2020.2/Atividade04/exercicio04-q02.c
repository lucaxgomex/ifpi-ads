//Dobro do valor dos primeiros vetores
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int vetA[10], vetB[10], n = 0;

    // Quantidade de elementos a serem inseridos
    printf("Numero de elementos do vetor A e vetorB: ");
    scanf("%d", &n);

    // Solicita elementos para o vetor A
    printf("Elementos para o vetor A\n");
    for (int i = 0; i < n; i++) {
        printf(">");
        scanf("%d", &vetA[i]);
    }

    // Solicita elementos para o vetor B
    printf("Elementos para o vetor B\n");
    for (int i = 0; i < n; i++) {
        printf(">");
        scanf("%d", &vetB[i]);
    }

    // VetorC
    // Vetor C tem n*2 Elementos
    int vetC[n * 2];

    printf("Vetor C\n");
    for (int a = 0, b = n, c = 0; c < n; c++, a++, b++) {
        vetC[a] = vetA[a];
        vetC[b] = vetB[a];
    }

    // Exibir valores de C
    for (int i = 0; i < n * 2; i++){
        printf("Pos %d > %d\n", i, vetC[i]);
    }

    return 0;
}