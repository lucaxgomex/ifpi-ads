//Quantos dias, horas e minutos correspondem a um minuto
#include <stdio.h>
#include <stdlib.h>

void result(int day, int hour, int minute) {
	printf("%d dia(s), ", day);
	printf("%d hora(s) e ", hour);
	printf("%d minuto(s).", minute);
}

void values() {
	int day, hour, minute;

	printf("Informe o valor dos minutos: ");
	scanf("%d", &minute);

	day = minute / 1440;
	hour = (minute % 1440) / 60;
	minute = (minute % 1440) % 60;

	result(day, hour, minute);
	printf("\n");
}

int main() {
	values();
	return 0;
}