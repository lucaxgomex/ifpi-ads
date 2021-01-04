//Caracteres duplicados
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char quote[100];
    int size = 0;

    printf("Digite uma frase: ");
    fflush(stdin);
    fgets(quote, 100, stdin);

    size = strlen(quote);

    for (int i = 0; i < size; i ++) {
        printf("%c", quote[i]);
        printf("%c", quote[i]);
    }
    
    return 0;
}