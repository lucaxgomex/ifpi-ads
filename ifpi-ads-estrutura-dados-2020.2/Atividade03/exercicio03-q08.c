//Competicao de natacao
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int numProva, qtdNadadores, totPtsClubeA, totPtsClubeB, clasif, tempo;
    char nomeNadador[10], clube[10], clubeVencedor[10];
    char *a = "a";
    char *b = "b";

    while (1) {
        printf("Numero da prova: ");
        scanf("%d", &numProva);

        printf("Quantidade de nadadores: ");
        scanf("%d", &qtdNadadores);

        if (numProva == 0 && qtdNadadores == 0) { 
            printf("---Total de pontos---\n");
            printf("Clube A: %d\n", totPtsClubeA);
            printf("Clube B: %d\n", totPtsClubeB);
            printf("\n----------\n");

            if (totPtsClubeA > totPtsClubeB) {
                printf("VENCEDOR e o Clube A!!!\n");
            } else {
                printf("VENCEDOR e o Clube B!!!\n");
            }
            break;
        } else {
            printf("Nome nadador: ");
            scanf("%s", nomeNadador);

            printf("Classificação: ");
            scanf("%d", &clasif);

            printf("Tempo: ");
            scanf("%d", &tempo);

            printf("Clube do nadador: ");
            scanf("%s\n", clube);
            printf("\n----------\n");

            if (clube == a) {
                switch (clasif) {
                case 1:
                    totPtsClubeA += 9;
                    break;
                case 2:
                    totPtsClubeA += 6;
                    break;
                case 3:
                    totPtsClubeA += 4;
                    break;
                case 4:
                    totPtsClubeA += 3;
                    break;
                default:
                    break;
                }
            } else if (clube == b) {
                    switch (clasif) {
                    case 1:
                        totPtsClubeB += 9;
                        break;
                    case 2:
                        totPtsClubeB += 6;
                        break;
                    case 3:
                        totPtsClubeB += 4;
                        break;
                    case 4:
                        totPtsClubeB += 3;
                        break;
                    default:
                        break;
                    }
                }
            } else {
                printf("Nenhum clube correspondente.");
                break;
            }
        }
    }
    return 0;
}