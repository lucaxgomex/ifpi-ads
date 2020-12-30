#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float C;

	printf("Informe o valor da temperatura em Celsius: ");
	scanf("%f", &C);

	printf("\nConversao para Farenheit: %.1f\n", CelsiusToFarenheit(C));
}