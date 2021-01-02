//Area de um retangulo
#include <stdio.h>
#include <stdlib.h>

void rectangle() {
	int width, height;

	printf("Informe a largura e a altura do retangulo: ");
	scanf("%i %i", &width, &height);

	printf("Area do triangulo: %i", width * height);
	printf("\n");
}

int main() {
	rectangle();
	return 0;
}