//Soma dos elementos da matriz
#include <stdlib.h>
#include <stdio.h>

int main() {
    int count;

    printf("Informe a ordem da matriz: ");
    scanf("%d", &count);

    int v[count][count];

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            printf("Informe o valor do elemento: ");
            scanf("%d", &v[i][j]);
        }
    }

    int colunaMaiorSoma = 0, colunaMenorSoma = 0, posMaiorcoluna = 0, posMenorcoluna = 0, somaAux = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {
            somaAux += v[j][i];
            if (j == 0) {
                colunaMaiorSoma = somaAux;
                colunaMenorSoma = somaAux;
                posMaiorcoluna = j;
                posMenorcoluna = j;
            } else {
                if (somaAux > colunaMaiorSoma) {
                    colunaMaiorSoma = somaAux;
                    posMaiorcoluna = j;
                }
                
                if (somaAux < colunaMenorSoma) { // TODO: menor com problemas 
                    colunaMenorSoma = somaAux;
                    posMenorcoluna = j;
                }
            }
        }
        somaAux = 0; // Zerar valor para poder somar novamente;
    }

    // Resultados;
    printf("\n---Resultados---\n");
    printf("\nSoma da MAIOR coluna: %d\n", colunaMaiorSoma);
    printf("\nPosicao MAIOR coluna: %d\n", posMaiorcoluna);
    printf("\nSoma da Menor coluna: %d\n", colunaMenorSoma);
    printf("\nPosicao MENOR coluna: %d\n", posMenorcoluna);

    return 0;
}