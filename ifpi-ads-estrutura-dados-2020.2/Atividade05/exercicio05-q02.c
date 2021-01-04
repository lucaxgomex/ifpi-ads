//Cada palavra de uma frase em uma linha
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char quote[100];

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(quote, 50, stdin);

    for (int i = 0; i < strlen(quote) - 1; i++) {
        if (quote[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", quote[i]);
        }   
    }
    printf("\n");
    return 0;
}