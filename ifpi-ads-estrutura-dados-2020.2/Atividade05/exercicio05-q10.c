//Contagem de palavras
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int wordCount = 0;

    printf("Digite um pequeno texto: ");
    fflush(stdin);
    fgets(text, 100, stdin);

    for (int i = 0; i < strlen(text) - 1; i++) {
        if (text[i] == ' ') {
            wordCount ++;
        }
    }
    printf("%d palavras\n", wordCount + 1);
    
    return 0;
}