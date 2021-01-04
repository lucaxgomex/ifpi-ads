//Senha correta ou incorreta
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char password[100], tip[10] = {'L', 'i', 'n', 'u', 'x'}, value;
    int size = 0;

    printf("Digite uma senha: ");
    fflush(stdin);
    fgets(password, 100, stdin);

    int sizePassword = strlen(password) - 1;
    int sizeTip = strlen(tip);

    for (int i = 0; i < sizePassword; i ++) {
        for (int j = 0; j < sizeTip; j ++) {

            if (password[i] == tip[j]) {
                printf("\nSenha correta!\n");
                break;
            } else {
                printf("Dica? ");
                scanf("%c", &value);

                while (password[i] != tip[j]) {
                    if (value == 'n') {
                        break;
                    } else {
                        printf("\nMelhor Sistema Operacional >_<: ");
                        fflush(stdin);
                        fgets(password, 100, stdin);
                        //scanf(" ");

                        if (password[i] == tip[j]) {
                            printf("\nSenha correta!\n");
                            break;
                        }           
                    }
                }
            }
        }
    }
    return 0;
}