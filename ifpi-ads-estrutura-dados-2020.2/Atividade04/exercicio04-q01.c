//Array inverso
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, vetA[100], vetB[100], elements, i;

	printf("Informe a quantidade de elementos do Vetor A: ");
	scanf("%d", &n);

	printf("\nElementos de A: \n");

    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i);
        scanf("%d", &elements);

        vetA[i] = elements;
    }

    printf("\nElementos de B: \n");
    for (i = n - 1; i >= 0; i --) {
        printf("%d ", vetA[i]);
    }

	return 0;
}