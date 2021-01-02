//Temperatura em Celsius equivalente em Fahrenheit
#include <stdio.h>
#include <stdlib.h>

void CtoF() {
	float c, tempF;

	printf("Informe o valor da temperatura atual em Celsius: "); 
	scanf("%f", &c);

	tempF = (9 * c + 160) / 5;

	printf("Valor da temperatura convertido em Fahrenheit: %.1f", tempF);
	printf("\n");
}

int main() {
	CtoF();
	return 0;
}