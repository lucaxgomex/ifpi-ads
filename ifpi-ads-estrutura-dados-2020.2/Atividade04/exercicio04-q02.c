//Criacao de um terceiro vetor a partir de um primeiro
#include <stdio.h>
#include <stdlib.h>

int main() {
	int q, A[100], B[100], i, elements;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &q);	

	for (i = 0; i < q; i ++) {
		printf("Elemento %d de A: ", i);
		scanf("%d", &elements);		

		A[i] = elements;
	}

	for (i = 0; i < q; i ++) {
		printf("Elemento %d de B: ", i);
		scanf("%d", &elements);		

		B[i] = elements;
	}

	printf("\nElementos de C: \n");
	for (i = 0; i < q; i ++) {
		printf("%d\n", A[i]);
		
		printf("%d\n", B[i]);
	}

	return 0;
}