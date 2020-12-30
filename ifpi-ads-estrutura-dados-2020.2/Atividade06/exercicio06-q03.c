#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float dollar;

	printf("Informe um valor em dolar:");
	scanf("%f", &dollar);

	printf("Valor conversido para real: R$ %.2f\n", dollarToReal(dollar));

	return 0;
}