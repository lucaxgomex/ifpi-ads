//conjulgação de verbo no presente
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[100];
    int tam = 0;

    printf("Palavra: ");
    fflush(stdin);
    fgets(palavra, 100, stdin);

    tam = strlen(palavra);

    for (int i = 0; i < tam - 2; i++) {
        if (palavra[i] == 'e' && palavra[i + 1] == 'r') {
            printf("o");       
        } else {
            printf("%c", palavra[i]);   
        }
    }
    printf("\n");
    return 0;
}