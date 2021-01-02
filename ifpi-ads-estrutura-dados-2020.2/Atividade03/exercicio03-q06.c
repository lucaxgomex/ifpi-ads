//Numero de digitos em um numero
#include <stdio.h>
#include <stdlib.h>

void numbers() {
    int count = 0, n;

    printf("Informe o numero a seguir: ");
    scanf("%d", &n);

    do {
        n = n / 10;
        ++count;
    } while (n != 0);

    printf("\nQuantidade de digitos: %d\n", count);
}

int main() {
	numbers();
	return 0;
}