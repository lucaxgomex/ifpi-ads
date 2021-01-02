//Fatorial
#include <stdio.h>
#include <stdlib.h>

void fat() {
	int n, count, result = 1;

	printf("Informe numero: ");
	scanf("%d", &n);

	count = n;
	do {
		result *= count;
		count --;
	} while (count > 1);

	printf("\nFatorial de %d!: %d\n", n, result);
}

int main() {
	fat();
	return 0;
}