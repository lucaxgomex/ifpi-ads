//70% de um determinado valor
#include <stdio.h>
#include <stdlib.h>

void percent() {
	float value;

	printf("Informe o valor em R$: ");
	scanf("%f", &value);

	printf("70%% do valor informado: %.2f", value * 0.7);
	printf("\n");
}

int main() {
	percent();
	return 0;
}