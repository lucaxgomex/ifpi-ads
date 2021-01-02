//Decomposicao de dinheiro em um saque eletronico
#include <stdio.h>
#include <stdlib.h>

void withdraw(int* q, int* values) {
	for (int j = 0; j < 7; j++) {
		printf("%d --> %d\n", q[j], values[j]);
	}
}

void cashMachine() {
	int values[7] = {100, 50, 20, 10, 5, 2, 1};
	int q[7];
	int cash;
	int rest;

	printf("Informe o valor do saque: ");
	scanf("%d", &cash);

	q[0] = cash / values[0];
	rest = cash % values[0];

	for (int i = 1; i < 7; i++) {
		q[i] = rest / values[i];
		rest = rest % values[i];
	}

	withdraw(q, values);
}

int main() {
	cashMachine();
	return 0;
}