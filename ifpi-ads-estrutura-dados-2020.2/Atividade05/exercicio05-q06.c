//Escrever algarismo por extenso
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char quote[100];
    int size;

    printf("Frase: ");
    fflush(stdin);
    fgets(quote, 100, stdin);

    size = strlen(quote);

    for (int i = 0; i < size; i++) {
        if (quote[i] == '1') {
            printf("um");
        } 
        else if (quote[i] == '2'){
            printf("dois");
        } 
        else if (quote[i] == '3') {
            printf("tres");
        } 
        else if (quote[i] == '4') {
            printf("quatro");
        } 
        else if (quote[i] == '5') {
            printf("cinco");
        } 
        else if (quote[i] == '6') {
            printf("seis");
        } 
        else if (quote[i] == '7') {
            printf("sete");
        } 
        else if (quote[i] == '8') {
            printf("oito");
        } 
        else if (quote[i] == '9') {
            printf("nove");
        } 
        else if (quote[i] == '0') {
            printf("zero");
        }
        else
        {
            printf("%c", quote[i]);
        }
    }
    return 0;
}