#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float kilometerPerHour;

	printf("Informe a velocidade em m/s: ");
	scanf("%f", &kilometerPerHour);

	printf("Resultado em km/h: %.2f\n", meterPerSecond(kilometerPerHour));
}