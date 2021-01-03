#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void)
{

    setlocale(LC_ALL, "");

    int n = 0;

    printf("Quantidade de elementos> ");
    scanf("%d", &n);
    int vetA[n], vetB[n], vetC[n];
    // Solicita elementos para o vetor A
    printf("Elementos para o vetor A\n");
    for (int i = 0; i < n; i++)
    {
        printf(">");
        scanf("%d", &vetA[i]);
    }

    // Solicita elementos para o vetor B
    printf("Elementos para o vetor B\n");
    for (int i = 0; i < n; i++)
    {
        printf(">");
        scanf("%d", &vetB[i]);
    }

    // Colocar elementos de A em C
    printf("Vetor C\n");
    for (int a = 0, c = 0; a < n; c++, a++)
    {
        vetC[a] = vetA[a];
    }

    // TODO: Essa parte está com problemas
    // Colocar elementos de B em C
    for (int i = 0; i < n; i++) // verifica B
    {
        for( int j= 0; j < n; j++){ // verifica C
            if( vetB[i] != vetC[j]){
                vetC[n+i] = vetB[i];
            }
        }
    }

    // Exibir valores de C
    for (int i = 0; i < n * 2; i++)
    {
        printf("Pos %d > %d\n", i, vetC[i]);
    }

    system("pause");
    return 0;
}