//Equivalencia de metros para centimetros
#include <stdio.h>
#include <stdlib.h>

void converter() {
	float m;

	printf("Informe o valor correspondente em metros: ");
	scanf("%f", &m);

	printf("Valor correspondente em centimetros: %.2f", m * 100);
	printf("\n");
}

int main() {
	converter();
	return 0;
}