//Maior numero
#include <stdio.h>
#include <stdlib.h>

void largeNumber() {
	int n, element, large = 0, count = 0;

	printf("Informe a quantidade de numeros: ");
	scanf("%d", &n);

	do {
		printf("Informe o numeros a seguir: ");
		scanf("%d", &element);		

		if (element > large) {
			large = element;
		}
		count ++;
	} while (count < n);
	printf("\nMaior numero: %d\n", large);
}

int main() {
	largeNumber();
	return 0;
}