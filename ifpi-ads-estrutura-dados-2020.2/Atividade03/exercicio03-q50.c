//Eleicoes
#include <stdio.h>
#include <stdlib.h>

void result(int c1, int c2, int c3, int null, int noVote) {
	printf("\nCandidato 1: %d votos\n", c1);
	printf("Candidato 2: %d votos\n", c2);
	printf("Candidato 3: %d votos\n", c3);
	printf("Nulos: %d votos\n", null);
	printf("Votos em branco: %d votos\n", noVote);

	if ((c1 > c2) && (c1 > c3)) {
		printf("Vencedor: Candidato 1\n");
	} else if ((c2 > c1) && (c2 > c3)) {
		printf("Vencedor: Candidato 2\n");
	} else if ((c3 > c1) && (c3 > c1)) {
		printf("Vencedor: Candidato 3\n");
	} else {
		printf("Segundo Turno\n");
	}
}

void vote() {
	int n, choice, c1 = 0, c2 = 0, c3 = 0, null = 0, noVote = 0;

	printf("Informe o total de eleitores: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i ++) {
		printf("Escolha o candidato: ");
		scanf("%d", &choice);

	    if (choice == 1) {
	         c1 ++;
	    } else if (choice == 2) {
	        c2 ++;
	    } else if (choice == 3) {
	    	c3 ++;
	    } else if (choice == 9){
	        null ++;
	    } else if (choice == 0) {
	        noVote ++;
	    } else {
	        null ++;
	    }
	}
	result(c1, c2, c3, null, noVote);
}

int main() {
	vote();
	return 0;
}