//Numeros inteiros de 1 a n
#include <stdio.h>
#include <stdlib.h>

void intNumbers() {
	int n, count = 1;

	printf("Informe um numero a seguir: ");
	scanf("%d", &n);

	do {
		printf("\nNumeros: %d\n", count);
		count ++;
	} while (count <= n);

}

int main() {
	intNumbers();
	return 0;
}