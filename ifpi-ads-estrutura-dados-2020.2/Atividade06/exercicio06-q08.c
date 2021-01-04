#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float r;

	printf("Informe o valor do raio de uma esfera: ");
	scanf("%f", &r);

	printf("\nVolume da esfera: %.2f\n", sphereVolume(r));
}