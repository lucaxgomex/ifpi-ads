#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int side;

	printf("Informe o lado do quadrado: ");
	scanf("%d", &side);

	printf("\nValor da area: %d\n", squareArea(side));
}