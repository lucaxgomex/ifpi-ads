//Quantidade de latao atravez de zinco e cobre
#include <stdio.h>
#include <stdlib.h>

void elements() {
	float brass;

	printf("Informe a quantidade de latao desejada: ");
	scanf("%f", &brass);

	printf("\nQuantidade de cobre disponivel: %.2f\n", brass * 0.7);
	printf("Quantidade de zinco disponivel: %.2f\n", brass * 0.3);
}

int main() {
	elements();
	return 0;
}