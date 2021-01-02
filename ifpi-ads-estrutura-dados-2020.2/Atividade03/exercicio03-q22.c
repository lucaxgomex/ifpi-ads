//Divisao sem utilizar o final de divisao
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int contador, numero_1, numero_2, resto, quociente, artificio, maior, menor;
	
	printf("Numero 1: ");
	scanf("%i", &numero_1);
	
	printf("Numero 2: ");
	scanf("%i", &numero_2);
	
	if (numero_1 > numero_2){
		maior = numero_1;
		menor = numero_2;
	}else{
		maior = numero_2;
		menor = numero_1;
	}
	
	artificio = maior;
	
	quociente = 0;
	
	
	while (artificio >= menor) {
		artificio -= menor;
		quociente += 1;
	}
	resto = artificio;
	printf("Quociente: %i\nResto: %i", quociente, resto);
	
	return 0;
}
