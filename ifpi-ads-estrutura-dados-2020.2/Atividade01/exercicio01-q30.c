//Valor da entrada e das prestacoes apos uma compra
#include <stdio.h>
#include <stdlib.h>

void calc() {
	int value, e, p;

	printf("Informe o valor do produto a ser comprado: ");
	scanf("%d", &value);

	p = (value / 3) * 2;
	e = value - p;

	printf("\nR$%d de entrada e duas prestacoes iguais a R$ %d\n", e, p);
}

int main() {
	calc();
	return 0;
}