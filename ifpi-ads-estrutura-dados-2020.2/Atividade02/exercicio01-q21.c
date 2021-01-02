//Quantas anos e meses correspondem a um mes
#include <stdio.h>
#include <stdlib.h>

void result(int year, int month) {
	printf("\n%d ano(s) e %d mese(s)\n", year, month);
}

void values() {
	int year, month;

	printf("Informe o valor dos meses: ");
	scanf("%d", &month);

	year = month / 12;
	month = month % 12;

	result(year, month);
	printf("\n");
}

int main() {
	values();
	return 0;
}