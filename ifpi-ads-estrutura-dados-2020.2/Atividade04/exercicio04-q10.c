//Soma e media dos elementos do array
#include <stdio.h>
#include <stdlib.h>

void arrays() {
	int n, a[100], sum = 0;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {
		printf("Elementos do vetor A: ");
		scanf("%d", &a[i]);	
		sum += a[i];
	}
	printf("\nSoma: %d\n", sum);
	printf("Media: %.f\n", (float) sum / n);
}

int main() {
	arrays();
	return 0;
}