//Soma de todos os numeros
#include <stdio.h>
#include <stdlib.h>

void sumAll() {
	int n, sum = 0;

	printf("Informe o numero: ");
	scanf("%d", &n);

	for (int count=1; count <= n; count ++) {
		sum += count;

		if (count == n) {
			printf(" %d", count);
			printf(" = ");
		} else {
			printf(" %d +", count);
		}
	}
	printf("%d\n", sum);
}

int main() {
	sumAll();
	return 0;
}