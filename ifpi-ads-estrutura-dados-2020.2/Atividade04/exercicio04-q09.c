//Sequencia Fibonacci
#include <stdlib.h>
#include <stdio.h>

int main() {
    int a = 0, b = 1, t, c;

    printf("Quantidade de termos: ");
    scanf("%d", &t);

    int vet[t];

    vet[0] = 0;
    vet[1] = 1;

    for (int i = 2; i < t; i ++) {
        c = a + b;  
        a = b;      
        b = c;      
        vet[i] = c;
    }

    printf("\nFibonacci\n");
    for (int j = 0; j < t; j ++) {
        printf("%d ", vet[j]);
    }
    
    return 0;
}