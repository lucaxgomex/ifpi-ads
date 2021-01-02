//Area de um triangulo a partir da base e da altura
#include <stdio.h>
#include <stdlib.h>

void triangle() {
	int base, height;

	printf("Informe a base e a altura de um triangulo: ");
	scanf("%i %i", &base, &height);

	printf("Area do triangulo: %i", (base * height)/2);
	printf("\n");
}

int main() {
	triangle();
	return 0;
}