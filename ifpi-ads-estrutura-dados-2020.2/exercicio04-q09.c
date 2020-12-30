//Sequencia de Fibonacci
#include <stdio.h>
#include <stdlib.h>

void sequence() {
	int n, a[] = {}, first = 0, second = 1, next;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {
		printf("Elementos do vetor A: ");
		scanf("%d", &a[i]);	
	}
}

int main() {
	sequence();
	return 0;
}