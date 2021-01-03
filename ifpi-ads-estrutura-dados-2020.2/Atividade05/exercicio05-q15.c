#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {

    char frase[100];
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    char fraseSemVogal[100];
    int i, j, tamFrase=0;

    printf("Frase: ");
    // fflush(stdin);
    gets(frase);

    tamFrase = strlen(frase);
    
    for ( i = 0; i < tamFrase; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (frase[i] != vogais[j])
            {
                fraseSemVogal[i] = frase[i];
            }
        }
    }
    printf("%s", fraseSemVogal);
    
    
    return 0;

}