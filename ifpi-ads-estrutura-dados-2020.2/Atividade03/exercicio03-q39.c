//Multiplos entre limites
#include <stdio.h>
#include <stdlib.h>

void result(int n, int infBound, int supBound) {
	do {
		if (infBound % n == 0) {
			printf("\n%d\n", infBound);
		}
		infBound ++;
	} while (infBound <= supBound);
}

void values() {
	int n, infBound, supBound;

	printf("Informe um valor, o limite inferior e o limite inferior: ");
	scanf("%d %d %d", &n, &infBound, &supBound);

	result(n, infBound, supBound);
}

int main() {
	values();
	return 0;
}