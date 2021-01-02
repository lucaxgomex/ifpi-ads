//Soma e media de numeros de uma lista
#include <stdio.h>
#include <stdlib.h>

void meanNumber() {
	int n, elements, count = 0, sum = 0;
	float mean = 0.0;

	printf("Informe um numero a seguir: ");
	scanf("%d", &n);

	do {
		printf("Informe todos os numeros: ");
		scanf("%d", &elements);

		count ++;
		sum += elements;
		mean = sum / n;

	} while (count < n);

	printf("\nSomatorio: %d", sum);
	printf("\nMedia: %f\n", mean);
}

int main() {
	meanNumber();
	return 0;
}