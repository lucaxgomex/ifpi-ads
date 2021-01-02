// Multiplicacao sem o operador de multiplicacao
#include <stdio.h>
#include <stdlib.h>

void multiplicationCalc() {
	int n1, n2, aux;
	
	printf("Informe dois numeros a seguir: ");
	scanf("%d %d", &numero_1, &numero_2);
	
	aux = n2;
	
	for (int i = 1; i < n1; i ++){
		n2 += aux;
	}

	printf("Resultado: %d", numero_2);
}

int main(){
	multiplicationCalc();
	return 0;
}