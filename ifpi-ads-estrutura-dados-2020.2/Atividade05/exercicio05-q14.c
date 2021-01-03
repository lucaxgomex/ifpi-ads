#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void) {

    char frase[100], subFrase[100];
    int tamFrase, tamSubFrase, posInicioSubstituicao;

    printf("Frase: ");
    fflush(stdin);
    gets(frase);

    printf("SubFrase: ");
    fflush(stdin);
    gets(subFrase);

    tamFrase = strlen(frase);
    tamSubFrase = strlen(subFrase);

    printf("Iniciar substituicao a partir de qual posicao na frase [0 -> %d]: ", tamFrase);
    scanf("%d",&posInicioSubstituicao);
    
    int c=0;
    for (int i = 0; i < tamFrase; i++)
    {
        if (i == posInicioSubstituicao)
        {
            for (int j = 0; j < tamSubFrase; j++)
            {
                frase[c] = subFrase[j];
                c++;
            }
            
        }
        c++;
        
    }
    printf("\nSua nova frase é: %s", frase);
    
    
    
    return 0;

}