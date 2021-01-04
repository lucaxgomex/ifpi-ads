#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int num1, num2;

	printf("Informe dois numeros: ");
	scanf("%d %d", &num1, &num2);

	printf("\nValor do MDC: %d\n", mdc(num1, num2));
}