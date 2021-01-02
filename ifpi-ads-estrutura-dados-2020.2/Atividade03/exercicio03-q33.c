//Todos os numeros pares
#include <stdio.h>
#include <stdlib.h>

void pairNumbers() {
	int number, count = 0;

	printf("Informe um numero a seguir: ");
	scanf("%d", &number);

	do {
		if (count % 2 == 0) {
			printf("\nNumero par: %d\n", count); 
		}
		count ++;
	} while (count <= number);
}

int main() {
	pairNumbers();
	return 0;
}