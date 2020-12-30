#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float F;

	printf("Informe o valor da temperatura em Farenheit: ");
	scanf("%f", &F);

	printf("\nConversao para Celsius: %.1f\n", FarenheitToCelsius(F));
}