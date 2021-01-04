#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int num1, num2;

	printf("Informe dois numeros: ");
	scanf("%d %d", &num1, &num2);

	printf("\nValor do MMC: %d\n", mmc(num1, num2));
}