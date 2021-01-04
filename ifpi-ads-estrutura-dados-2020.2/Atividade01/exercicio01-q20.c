//Quantas semanas, dias e horas correspondem a uma hora 
#include <stdio.h>
#include <stdlib.h>

void result(int week, int day, int hour) {
	printf("\n%d semana(s), %d dia(s) e %d hora(s)", week, day, hour);
}

void values() {
	int hour, week, day;

	printf("Informe o valor das horas: ");
	scanf("%d", &hour);

	week = hour / 168;
	day = (hour % 168) / 24;
	hour = (hour % 168) % 24;

	result(week, day, hour);
}

int main() {
	values();
	return 0;
}