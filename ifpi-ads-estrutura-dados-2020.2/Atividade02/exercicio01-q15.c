//Temperatura em Fahrenheit equivalente em Celsius
#include <stdio.h>
#include <stdlib.h>

void FtoC() {
	float f, tempC;

	printf("Informe o valor da temperatura atual em Fahrenheit: "); 
	scanf("%f", &f);

	tempC = (5 * f - 160) / 9;

	printf("Valor da temperatura convertido em Celsius: %.1f", tempC);
	printf("\n");
}

int main() {
	FtoC();
	return 0;
}