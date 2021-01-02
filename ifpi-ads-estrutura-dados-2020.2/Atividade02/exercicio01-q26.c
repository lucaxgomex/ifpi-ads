//Valor gasto por um fumante
#include <stdio.h>
#include <stdlib.h>

void calc(int years, int cigarettes, float price) {
	float priceDay, priceYear;

	priceDay = (price * cigarettes) / 20;
	priceYear = priceDay * 365 * years;

	printf("Custo total de cigarros fumados: R$ %.2f\n", priceYear);
}

void money() {
	int years, cigarettes;
	float price;

	printf("Informe os anos, o numero de cigarros por dia e o preco da carteira: ");
	scanf("%d %d %f", &years, &cigarettes, &price);

	calc(years, cigarettes, price);
}

int main() {
	money();
	return 0;
}