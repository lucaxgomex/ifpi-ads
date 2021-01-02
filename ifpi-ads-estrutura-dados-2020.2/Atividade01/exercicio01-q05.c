//Inverso de um numero inteiro de 3 digitos
#include <stdio.h>
#include <stdlib.h>

void reverse(int n) {
	int c = n / 100;
	int d = (n % 100) / 10;
	int u = (n % 100) % 10;
	//printf("%i %i %i", c, d, u);
	int reverseNumber = (100 * u) + (10 * d) + (c);

	printf("Numero reverso: %i", reverseNumber);
}

/*
void verification(int n) {
	printf("%li", sizeof(n));

	if (sizeof(n) < 3 || sizeof(n) > 3) {
		printf("\nTamanho incompativel com o calculo.");
	} else {
		reverse();
	}
}
*/

void number() {
	int n;

	printf("Informe o valor do numero a ser analisado: ");
	scanf("%i", &n);

	//verification(n);
	reverse(n);
	printf("\n");
}

int main() {
	number();
	return 0;
}