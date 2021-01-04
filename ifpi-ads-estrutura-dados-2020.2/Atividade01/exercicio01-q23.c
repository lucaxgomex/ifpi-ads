//Media de 3 numeros
#include <stdio.h>
#include <stdlib.h> 

void mean() {
	int number;
	float sum = 0;

	for (int i = 0; i < 3; i++) {
		printf("Informe um determinado numero: ");
		scanf("%d", &number);
		sum += number;
	}
	printf("\nA media entre os tres numeros: %.3f\n", sum / 3);
}

int main() {
	mean();
	return 0;
}