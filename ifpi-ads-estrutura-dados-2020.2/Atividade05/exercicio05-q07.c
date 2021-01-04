//Conjugação de verbo no presente
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char word[100];
    int size = 0;

    printf("Informe um verbo: ");
    fflush(stdin);
    fgets(word, 100, stdin);

    size = strlen(word);

    printf("Verbo conjugado: ");
    for (int i = 0; i < size - 2; i++) {
        if (word[i] == 'e' && word[i + 1] == 'r') {
            printf("o");       
        } else {
            printf("%c", word[i]);   
        }
    }
    printf("\n");
    
    return 0;
}