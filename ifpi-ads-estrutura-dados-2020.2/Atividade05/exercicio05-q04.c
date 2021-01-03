#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[100];
    int tam=0;

    printf("Frase: ");
    fflush(stdin);
    gets(frase);

    tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        printf("%c", frase[i]);
        printf("%c", frase[i]);
    }
    
    return 0;
}