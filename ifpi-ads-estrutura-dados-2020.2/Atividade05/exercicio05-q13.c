#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main(void) {

    char nome[100];
    int tam=0;

    printf("Nome: ");
    fflush(stdin);
    gets(nome);

    tam = strlen(nome);

    printf("Nome de usuario:\n");
    printf("%c", nome[0]);
    
    for (int i = 0; i < tam; i++)
    {
        if (nome[i] == ' ')
        {
            printf("%c", nome[i+1]);
        }
        
    }
    
    return 0;

}