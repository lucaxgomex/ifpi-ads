//Divisao de um numero sucessivamente
#include <stdio.h>
#include <stdlib.h>

void division() {
	double result, x;

	printf("Informe o numero a ser trabalhado: ");
	scanf("%le", &x);

	while (x / 2 > 1) {
		result = x / 2;
		x /= 2;
	}

	printf("\nUltima operacao: %f / 2 = %f\n", x * 2, result);
}

int main() {
	division();
	return 0;
}