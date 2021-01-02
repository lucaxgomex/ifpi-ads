//Quociente e resto da divisao de dois numeros inteiros
#include <stdio.h>
#include <stdlib.h>

void quotient(int x, int y) {
	int result = x / y;

	printf("\nValor do quociente: %i", result);
}

void rest(int x, int y) {
	int result = x % y;

	printf("\nValor do resto: %i", result);
}

void numbers() {
	int n1, n2;

	printf("Informe o valor dos dois numeros: ");
	scanf("%i %i", &n1, &n2);

	quotient(n1, n2);
	rest(n1, n2);
	
	printf("\n");
}

int main() {
	numbers();
	return 0;
}