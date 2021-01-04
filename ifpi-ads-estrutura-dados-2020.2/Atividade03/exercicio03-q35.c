//Prograssao Aritmetica
#include <stdio.h>
#include <stdlib.h>

void pa(int a, int bound, int r) {
	int count = a;

	do {
		printf("\n%d\n", count);
		count *= r;
	} while (count <= bound);
}

void values() {
	int a, bound, r;

	printf("Informe um valor inicial, o limite e a razao: ");
	scanf("%d %d %d", &a, &bound, &r);

	pa(a, bound, r);
}

int main() {
	values();
	return 0;
}