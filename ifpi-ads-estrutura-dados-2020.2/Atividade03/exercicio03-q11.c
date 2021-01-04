//Alunos aprovados e reprovados
#include <stdio.h>
#include <stdlib.h>

void result() {
	int matricula, aprovados = 0, reprovados = 0;
	float nota_1, nota_2, nota_3, media;
	
	printf("Matricula: ");
	scanf("%i", &matricula);
	
	while (matricula != 0) {
		printf("\nNota 1: ");
		scanf("%f", &nota_1);
	
		printf("Nota 2: ");
		scanf("%f", &nota_2);
	
		printf("Nota 3: ");
		scanf("%f", &nota_3);
		
		media = ((2 * nota_1) + (3 * nota_2) + (5 * nota_3)) / 10;
		
		printf("\nMedia: %.2f\n", media);
		
		if (media >= 7) {
			aprovados += 1;
		} else {
			reprovados += 1;
		}
		printf("\nMatricula: ");
		scanf("%i", &matricula);		
	}
	printf("\n\nTotal de aprovados: %i", aprovados);
	printf("\nTotal de Reprovados: %i", reprovados);
	printf("\nTotal de alunos: %i", aprovados + reprovados);	
}

int main() {
	result();
	return 0;
}