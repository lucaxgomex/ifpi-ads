//Base hexadecimal e decimal
#include <stdio.h>
#include <stdlib.h>

void decimal(int bin[8]) {
	int sum, d = 128;

	for (int i = 0; i < 8; i ++) {
		if (bin[i] == 1) {
			sum += d;
		}
		d /= 2;
	}
	printf("Resultado em decimal: %d\n", sum);
}

/*
void hexa(int bin[8]) {

}
*/

void result() {
	int bin[8];

	for (int i = 0; i < 8; i ++) {
		printf("Informe cada elemento do array: ");
		scanf("%d", &bin[i]);
	}

	//hexa(bin);
	decimal(bin);
}

int main() {
	result();
	return 0;
}