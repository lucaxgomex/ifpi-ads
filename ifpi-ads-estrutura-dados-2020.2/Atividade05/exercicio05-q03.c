//Frase sem espaços
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];

    printf("Frase: ");
    fflush(stdin);
    fgets(frase, 30, stdin);

    for (int i = 0; i < strlen(frase) - 1; i++) {
        if (frase[i] == ' ') {
            frase[i] = '-'; //???
        } else {
            printf("\n%c", frase[i]);
        }
    }
    printf("\n");
    return 0;
}