//Soma e media dos elementos do array
#include <stdio.h>
#include <stdlib.h>

void arrays() {
	int n, a[] = {}, sum = 0;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {
		printf("Elementos do vetor A: ");
		scanf("%d", &a[i]);	
		sum += a[i];
	}
	printf("\nSoma: %d\n", sum);
	printf("Media: %.3f\n", (float) sum / n);
}

int main() {
	arrays();
	return 0;
}