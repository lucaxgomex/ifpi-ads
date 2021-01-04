#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int base, height;

	printf("Informe a base e a altura do triangulo: ");
	scanf("%d %d", &base, &height);

	printf("\nValor da area: %.2f\n", triangleArea(base, height));
}