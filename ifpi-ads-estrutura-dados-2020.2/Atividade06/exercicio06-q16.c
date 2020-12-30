#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	int year;

	printf("Informe um ano a ser analisado: ");
	scanf("%d", &year);

	leapYear(year);
}