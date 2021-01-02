//Tranformar dias em anos, meses e dias
#include <stdio.h>
#include <stdlib.h>

void calculate(int year, int month, int day) {
	year = day / 365;
	month = (day % 365) / 30;
	day = (day % 365) % 30;

	printf("%d anos, %d meses e %d dias.\n", year, month, day);
}

void result() {
	int year=0, month=0, day;

	printf("Informe a idade da pessoa em dias: ");
	scanf("%d", &day);

	calculate(year, month, day);
}

int main() {
	result();
	return 0;
}