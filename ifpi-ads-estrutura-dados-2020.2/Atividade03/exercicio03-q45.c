//Maior quadrado perfeito
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void squareNumber() {
	int n, value, showValue, count = 1;

	printf("Informe a quantidade de numeros: ");
	scanf("%d", &n);

	do {
		value = pow(count, 2);

		if (value <= n) {
			showValue = value;
		}
		count ++;
	} while (count <= n);

	printf("\nO quadrado mais proximo ou igual a %d: %d", n, showValue);
    printf("\nA raiz quadrada de %d: %.0lf\n", showValue, sqrt(showValue));
}

int main() {
	squareNumber();
	return 0;
}