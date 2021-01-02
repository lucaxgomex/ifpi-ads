//Quantos quilometros e metros ha em um metro
#include <stdio.h>
#include <stdlib.h>

void values() {
	int km, m;

	printf("Informe a quantidade de metros: ");
	scanf("%d", &m);

	km = m / 1000;
	m = m % 1000;

	printf("\n%d quilometro(s) e %d metro(s)\n", km, m);
}

int main() {
	values();
	return 0;
}