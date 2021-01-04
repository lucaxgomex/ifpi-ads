//Transformar anos, meses e dias em apenas dias
#include <stdio.h>
#include <stdlib.h>

void days(int year, int month, int day) {
	year = year * 365;
	month = month * 30;

	printf("\nA idade precisa da pessoa corresponde a %d dias.\n", year + month + day);
}

void result() {
	int year, month, day;

	printf("Informe os anos, os meses e os dias de uma pessoa: ");
	scanf("%d %d %d",&year, &month, &day);

	days(year, month, day);
}

int main() {
	result();
	return 0;
}