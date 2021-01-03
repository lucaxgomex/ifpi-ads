#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    char frase[100], tam=0;

    printf("Frase: ");
    fflush(stdin);
    gets(frase);

    tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        if ( frase[i] == ' ') {
            printf("");
        } else {
            printf("%c", frase[i]);
        }
    }
    
    return 0;
}