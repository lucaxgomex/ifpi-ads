//Volume de uma esfera
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592

void volume() {
	double radius, v;

	printf("Informe o valor do raio: ");
	scanf("%lf", &radius);

	v = (4 * pi * pow(radius, 3)) / 3;

	printf("Valor do volume da circunferencia: %lf", v);
	printf("\n");
}

int main() {
	volume();
	return 0;
}