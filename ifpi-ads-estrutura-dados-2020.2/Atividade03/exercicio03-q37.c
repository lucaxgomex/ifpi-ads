#include <stdio.h>
#include <stdlib.h>

//Adicao
void sum(int value) {
	int count = 1, all;

	do {
		all = count + value;
		printf("%d + %d = %d\n", value, count, all);
		count ++;
	} while (count <= 10);
}

//Subtracao
void sub(int value) {
	int count = 1, all;

	do {
		all = value - count;
		printf("%d - %d = %d\n", value, count, all);
		count ++;
	} while (count <= 10);
}

//Multiplicacao
void mult(int value) {
	int count = 1, all;

	do {
		all = value * count;
		printf("%d x %d = %d\n", value, count, all);
		count ++;
	} while (count <= 10);
}

//Divisao
void divi(int value) {
	int count = 1, all;

	do {
		all = value / count;
		printf("%d / %d = %d\n", value, count, all);
		count ++;
	} while (count <= 10);
}

void results() {
	int value;

	printf("Informe um valor: ");
	scanf("%d", &value);

	printf("\n----------\nAdicao\n");
	sum(value);
	printf("\n----------\nSubtracao\n");	

	sub(value);
	printf("\n----------\nMultiplicacao\n");

	mult(value);
	printf("\n----------\nDivisao\n");

	divi(value);
	printf("\n----------\n");
}

int main() {
	results();
	return 0;
}