//Inversao da frase e troca das consoantes por '#'
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void reverse(char getArray[50]) {
    char inverted[50];
    int size = strlen(getArray), k = 0;

    for (int i = size - 1; i >= 0; i--) {
        inverted[k] = getArray[i];
        k++;
    }

    printf("\n%s\n", inverted);
}

int main() {
    char name[50], consonant, getArray[50];

    printf("Nome: ");
    fgets(name, 30, stdin); //Recebe uma string

    printf("Tamanho: %ld\n", strlen(name) - 1);

    for (int i = 0; i < strlen(name) - 1; i++) {

        consonant = name[i];
        if (consonant == 'a' || consonant == 'e' || consonant == 'i' || consonant == 'o' || consonant == 'u') {
            getArray[i] = consonant;
        } else {
            getArray[i] = '#';
        }
    }

    reverse(getArray);
    return 0;
}