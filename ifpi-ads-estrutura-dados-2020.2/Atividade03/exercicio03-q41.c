//Numeros impares entre limites
#include <stdio.h>
#include <stdlib.h>

void result(int infBound, int supBound) {
	do {
		if (infBound % 2 != 0) {
			printf("\n%d\n", infBound);
		}
		infBound ++;
	} while (infBound <= supBound);
}

void values() {
	int infBound, supBound;

	printf("Informe o limite inferior e o limite inferior: ");
	scanf("%d %d", &infBound, &supBound);

	result(infBound, supBound);
}

int main() {
	values();
	return 0;
}