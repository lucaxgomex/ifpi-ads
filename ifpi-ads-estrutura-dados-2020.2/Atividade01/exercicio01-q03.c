//Converter velocidade para metros por segundo
#include <stdio.h>
#include <stdlib.h>

void speed() {
	float kilo;

	printf("Informe o valor da velocidade(km/h): ");
	scanf("%f", &kilo);

	printf("Valor da velocidade em m/s: %.2f", kilo / 3.6);
	printf("\n");
}

int main() {
	speed();
}