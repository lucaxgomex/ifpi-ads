//Minimo multiplo comum entre dois numeros
#include <stdio.h>
#include <stdlib.h>

void result() {
	int a, b, c, mmc = 1, i = 2;

    printf("Informe os valores dos primeiros numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    while (a + b + c != 2) {
        if (a % i == 0 || b % i == 0) {
            mmc += i;

            if (a % i == 0) {
                a /= i;
            }

            if (b % i == 0) {
                b /=i;
            }

            if (c % i == 0) {
                c /= i;
            }
        } else {
            c ++;;
        }
    }
    printf("MMC= %d", mmc);
}

int main() {
    result();
    return 0;
}