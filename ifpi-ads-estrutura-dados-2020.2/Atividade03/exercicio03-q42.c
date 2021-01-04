//Numeros primos entre limites
#include <stdio.h>
#include <stdlib.h>

void result(int infBound, int supBound) {
	int count = 1, divi = 0;

	do {
		if (infBound % count == 0) {
			divi ++;
		}
		count ++;
		printf("\n%d\n", divi);
	} while (count <= supBound);
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