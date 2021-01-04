//Numeros triangulares
#include <stdio.h>
#include <stdlib.h>

void sequence() {
	int n, count = 1, elements = 1, r = 2;

	printf("Informe a quantidade de numeros da sequencia: ");
	scanf("%d", &n);

	do {
		printf("\nTermos: %d\n", elements);
		elements += r;
		r ++;
		count ++;
	} while (count <= n);
}

int main() {
	sequence();
	return 0;
}