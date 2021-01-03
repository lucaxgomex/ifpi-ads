#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{

    char frase[100], recebe[2];
    int tam;

    printf("Frase: ");
    fflush(stdin);
    gets(frase);

    tam = strlen(frase);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == '1')
        {
            printf("um");
        }
        else if (frase[i] == '2')
        {
            printf("dois");
        }
        else if (frase[i] == '3')
        {
            printf("tres");
        }
        else if (frase[i] == '4')
        {
            printf("quatro");
        }
        else if (frase[i] == '5')
        {
            printf("cinco");
        }
        else if (frase[i] == '6')
        {
            printf("seis");
        }
        else if (frase[i] == '7')
        {
            printf("sete");
        }
        else if (frase[i] == '8')
        {
            printf("oito");
        }
        else if (frase[i] == '9')
        {
            printf("nove");
        }
        else if (frase[i] == '0')
        {
            printf("zero");
        }
        else
        {
            printf("%c", frase[i]);
        }
    }

    return 0;
}