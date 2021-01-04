//Soma de numeros consecutivos
#include <stdio.h>
#include <stdlib.h>

void sum() {
	int x, first, second;

	printf("Informe um valor a seguir: ");
	scanf("%d", &x);

	for (;;) {
		printf("Informe o valor de um elemnto: ");
		scanf("%d", &first);		

		printf("Informe o valor de um elemento consecutivo: ");
		scanf("%d", &second);		

		if (first + second == x) {
			printf("\n%d + %d = %d\n", first, second, x);
			break;
		}
	}
}

int main() {
	sum();
	return 0;
}