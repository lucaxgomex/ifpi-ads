//Divisao e decrementacao
#include <stdio.h>	
#include <stdlib.h>

void operation() {
	int n, x;
	double result;

	printf("Informe os valores: ");
	scanf("%d %d", &n, &x);

	do {
		result = x / n;
		x /= n;
		n --;
	} while (n != 2);
	printf("\nResultado de %d por %d: %f\n", x, n, result);
}

int main() {
	operation();
}