//Remoção de vogais
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char quote[100];
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char noVowel[100];
    int i, j, size = 0;

    printf("Digite algo: ");
    fflush(stdin);
    fgets(quote, 100, stdin);

    size = strlen(quote);
    
    for (i = 0; i < size; i ++) {
        for (j = 0; j < 5; j ++) {
            if (quote[i] != vowels[j]) {
                noVowel[i] = quote[i];
            } else {
                noVowel[i] = ' ';
            }
        }
    }
    printf("\n%s", noVowel);
    return 0;
}