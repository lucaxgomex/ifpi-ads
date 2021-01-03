#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {


    char frase[100];
    int tam=0;

    printf("frase: ");
    fflush(stdin);
    gets(frase);

    tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == ' ')
        {
            printf("\n");
        } else
        {
            printf("%c", frase[i]);
        }
        
        
    }
    
    
    return 0;

}