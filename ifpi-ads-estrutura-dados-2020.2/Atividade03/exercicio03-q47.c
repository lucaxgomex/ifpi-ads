//Sequencia Fibonacci
#include <stdio.h>
#include <stdlib.h>

void fibonacciSequence() {
	int n, fibonacci, first = 0, second = 1, count = 1;

	printf("Informe a quantidade de numeros: ");
	scanf("%d", &n);

	printf("%d - ", first);
	do {
		fibonacci = first + second;
		second = first;
		first = fibonacci;

		count ++;

		if (count < n) {
			printf("%d - ", fibonacci);
		} else if (count == n) {
			printf("%d\n", fibonacci);
		}

	} while (count < n);
}

int main() {
	fibonacciSequence();
	return 0;
}