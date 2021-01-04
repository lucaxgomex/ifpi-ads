//Nome de usuário
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int size = 0;

    printf("Insira seu nome: ");
    fflush(stdin);
    fgets(name, 100, stdin);

    size = strlen(name);

    printf("Nome de usuario: \n");
    printf("%c", name[0]);
    
    for (int i = 0; i < size; i++) {
        if (name[i] == ' ') {
            printf("%c", name[i+1]);
        }   
    }
    return 0;
}