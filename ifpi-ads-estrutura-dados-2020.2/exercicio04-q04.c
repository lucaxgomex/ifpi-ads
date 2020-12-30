//Soma dos elementos de um array
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sum(int a[20]) {
	int sumElements = 0, first = 0, last = 19;

	for (first = 0; first < 20 && last > 0; first ++ && last --) { sumElements +=
pow((a[first] - a[last]), 2); } printf("\nValor da soma: %d\n", sumElements);
}

void allArrays() {
	int a[20];

	for (int i = 0; i < 20; i ++) {
		printf("Informe cada elemento do array: ");
		scanf("%d", &a[i]);
	}
	sum(a);
}

int main() {
	allArrays();
	return 0;
}