//Conversor de dolar para real
#include <stdio.h>	
#include <stdlib.h>

void conversor() {
	float dolar;

	printf("Informe o valor equivalente em dolar: ");
	scanf("%f", &dolar);

	printf("Valor convertido para real: R$ %.2f", dolar * 5.34);
	printf("\n");
}

int main() {
	conversor();
	return 0;
}