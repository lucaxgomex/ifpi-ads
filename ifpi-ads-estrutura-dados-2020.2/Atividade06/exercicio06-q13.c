#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int day, month, year;

	printf("Informe uma data (dia/mes/anos): ");
	scanf("%d %d %d", &day, &month, &year);

	validDate(day, month, year);

	return 0;
}