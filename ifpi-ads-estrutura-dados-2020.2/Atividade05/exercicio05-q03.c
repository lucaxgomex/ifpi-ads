//Frase sem espaços
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char quote[100];

    printf("Frase: ");
    fflush(stdin);
    fgets(quote, 100, stdin);

    for (int i = 0; i < strlen(quote) - 1; i++) {
        if (quote[i] == ' ') {
            quote[i] = '-'; //???
        } else {
            printf("\n%c", quote[i]);
        }
    }
    printf("\n");
    return 0;
}