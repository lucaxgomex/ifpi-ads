#include <stdio.h>
#include "LUCAS-GOMES-funcoes.h"

int main() {
	float r;

	printf("Informe o valor do raio de uma circunferencia: ");
	scanf("%f", &r);

	printf("\nComprimento da circunferencia: %.2f\n", length(r));
}