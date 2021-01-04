#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int base, height;

	printf("Informe a base e a altura do retangulo: ");
	scanf("%d %d", &base, &height);

	printf("\nValor da area: %d\n", rectangleArea(base, height));
}