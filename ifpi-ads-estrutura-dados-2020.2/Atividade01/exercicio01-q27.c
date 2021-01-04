//Custo ao consumidor de um carro novo
#include <stdio.h>
#include <stdlib.h>

void result(double fabric) {
	double cost = fabric + 0.28 + (fabric * 0.45);
	printf("\nCusto para o consumidor: R$ %.2lf\n", cost);
}

void values() {
	double fabric;

	printf("Informe o custo de fabrica desse carro: ");
	scanf("%lf", &fabric);

	result(fabric);
}

int main() {
	values();
	return 0;
}