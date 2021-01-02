//Converter velocidade para quilometros por hora
#include <stdio.h>
#include <stdlib.h>

void speed() {
	float meter;

	printf("Informe o valor da velocidade(m/s): ");
	scanf("%f", &meter);

	printf("Valor da velocidade em km/s: %.2f", meter * 3.6);
	printf("\n");
}

int main() {
	speed();
	return 0;
}