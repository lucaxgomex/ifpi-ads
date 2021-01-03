#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {

    char texto[100];
    int tam=0, numSpaces=0, totalLetras=0;

    printf("Texto: ");
    fflush(stdin);
    gets(texto);

    tam = strlen(texto);

    for (int i = 0; i < tam; i++)
    {
        if (texto[i] == ' ')
        {
            numSpaces++;
        }
    }

    totalLetras = tam - numSpaces;
    printf("O total de letras e de: %d", totalLetras);
    
    
    
    return 0;

}