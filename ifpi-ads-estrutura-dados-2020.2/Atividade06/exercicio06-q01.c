#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float meterPerSecond;

	printf("Informe a velocidade em m/s: ");
	scanf("%f", &meterPerSecond);

	printf("Resultado em km/h: %.2f\n", kilometerPerHour(meterPerSecond));
}