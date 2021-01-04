//Salario com aumento de 25%
#include <stdio.h>
#include <stdlib.h>

void salary() {
	float s, percent = 0.25;

	printf("Informe o valor do salario atual: ");
	scanf("%f", &s);

	printf("Aumento de salario: %.2f", s + (s * percent	));
	printf("\n");
}

int main() {
	salary();
}