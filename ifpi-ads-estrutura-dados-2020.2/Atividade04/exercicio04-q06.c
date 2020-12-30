//Indices de um array B a partir de um vetor A
#include <stdio.h>
#include <stdlib.h>

void getArrayB(int a[], int n) {
	int b[] = {}, i = 0;

	for (i = 0; i < n; i ++) {
		if (a[i] % 2 == 0) {
			b[i] = 0;
		} else {
			b[i] = 1;
		}
	}

	for (i = 0; i < n; i ++) {
		printf("Array B: %d", b[i]);
	}
}

void arrays() {
	int n, a[] = {};

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {
		printf("Elementos do vetor A: ");
		scanf("%d", &a[i]);		
	}

	getArrayB(a, n);
}

int main() {
	arrays();
	return 0;
}