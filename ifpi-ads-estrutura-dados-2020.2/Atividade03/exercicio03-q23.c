//N termos de uma PG
#include <stdio.h>
#include <stdlib.h>

int main(){	
	int contador, primeiro, termos, razao;
	
	printf("Primeiro Termo: ");
	scanf("%i", &primeiro);
	
	printf("Razao: ");
	scanf("%i", &razao);
	
	printf("Quantidade de termos: ");
	scanf("%i", &termos);
	
	printf("%i termos da pg: ", termos);
	
	while(contador < termos){
		printf("%i ", primeiro);
		primeiro *= razao;
		contador += 1;
	}
	return 0;
}