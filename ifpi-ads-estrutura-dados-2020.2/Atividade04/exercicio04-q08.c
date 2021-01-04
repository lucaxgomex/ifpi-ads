//Ordem crescente
#include <stdio.h>
#include <stdlib.h>

void main() {

    int i, j, a, n, number[30];
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i) {
        printf("Informe os elmentos: ");
        scanf("%d", &number[i]);
    }

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (number[i] > number[j]) {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("\nOrdem crescente:\n");

    for (i = 0; i < n; ++i)
        printf(">> %d\n", number[i]);
}