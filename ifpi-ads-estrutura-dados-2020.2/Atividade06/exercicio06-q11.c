#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int n;

	printf("Informe um numero: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("\nValor incalculavel.\n");
	} else {
		printf("\nValor do fatorial: %d\n", fatorial(n));
	}
}