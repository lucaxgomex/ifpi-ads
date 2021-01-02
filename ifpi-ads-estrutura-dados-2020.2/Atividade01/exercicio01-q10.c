//Area de um quadrado
#include <stdio.h>
#include <stdlib.h>

void square() {
	int l;

	printf("Informe o lado do quadrado: ");
	scanf("%i", &l);

	printf("Valor da area: %i", l * l);
	printf("\n");
}

int main() {
	square();
	return 0;
}