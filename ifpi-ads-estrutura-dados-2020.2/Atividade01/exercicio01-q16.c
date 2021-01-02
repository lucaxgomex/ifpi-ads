//Equivalencia de quilometros para metros
#include <stdio.h>
#include <stdlib.h>

void converter() {
	float km;

	printf("Informe o valor dos quilometros: ");
	scanf("%f", &km);

	printf("Valor convertido em metros: %.2f", km * 1000);
	printf("\n");
}

int main() {
	converter();
}