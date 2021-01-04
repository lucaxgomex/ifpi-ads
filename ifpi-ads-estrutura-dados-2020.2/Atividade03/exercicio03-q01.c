//Lista de numeros lidos
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i = 1;

	printf("Informe um numero: ");
	scanf("%i", &n);
	
	while (n != 0) {
		printf("\nDivisores de %i: ", n);

		while (i <= n){
			if (n % i == 0){
				printf("%i ", i);
				i ++;
			}else{
				i ++;
			}
		}
		printf("\n\nDigite um numero: ");
		scanf("%i", &n);
		i = 1;
	}
}