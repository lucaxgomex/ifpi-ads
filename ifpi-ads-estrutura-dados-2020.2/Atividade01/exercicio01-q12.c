//Comprimento da circunferencia
#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

void circumference() {
	double radius;

	printf("Informe o valor do raio: ");
	scanf("%lf", &radius);

	printf("O valor da circunferencia: %lf", 2 * pi * radius);
	printf("\n");
}

int main() {
	circumference();
	return 0;
}