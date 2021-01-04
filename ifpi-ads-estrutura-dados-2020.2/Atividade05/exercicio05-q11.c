//Nome e sobrenome
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char name[100], firstName[100], lastName[100];
    int size = 0, i = 0, space = 0;

    printf("Informe seu nome completo: ");
    fflush(stdin) - 1;
    fgets(name, 100, stdin);
    size = strlen(name) - 1;

    while (name[i] != ' ') {
        firstName[i] = name[i];
        i++;
    }
    
    for (int j = size; j >= 0; j--) {
        if (name[j] == ' ') {
            space = j;
            break;
        }
    }

    for (int k = space + 1, x = 0; k < size; k++, x++) {
        lastName[x] = name[k];
    }

    printf("\n%s/%s\r\n", lastName, firstName);
    return 0;
}