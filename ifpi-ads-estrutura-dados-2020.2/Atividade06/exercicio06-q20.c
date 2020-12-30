#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int n;

	printf("Informe um numero: ");
	scanf("%d", &n);

	printf("\nSoma de todos os numeros: %d\n", sumAll(n));
}