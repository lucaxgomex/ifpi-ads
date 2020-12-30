//Maior e menor elemento de array
#include <stdio.h>
#include <stdlib.h>

void arrays() {
	int n, a[] = {}, large = 0, small = 0, posLarge = 0, posSmall = 0;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {
		printf("Elementos do vetor A: ");
		scanf("%d", &a[i]);	

		if (a[i] > large)  {
			large = a[i];
			posLarge = i;
			small = a[i];
		}

		if (a[i] < small) {
			posSmall = 1;
			small = a[i];
		}
	}

	printf("\nMaior: %d --> Posicao: %d", large, posLarge);
	printf("\nMenor: %d --> Posicao: %d\n", small, posSmall);
}

int main() {
	arrays();
	return 0;
}