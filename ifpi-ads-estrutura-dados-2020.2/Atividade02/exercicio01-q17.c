//Equivalencia de quilogramas para gramas
#include <stdio.h>
#include <stdlib.h>

void converter() {
	float kl;

	printf("Informe o valor correspondente em quilogramas: ");
	scanf("%f", &kl);

	printf("Valor correspondente em gramas: %.2f", kl * 1000);
	printf("\n");
}

int main() {
	converter();
	return 0;
}