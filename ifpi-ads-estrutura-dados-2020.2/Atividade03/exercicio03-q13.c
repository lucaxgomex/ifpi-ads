//Funcionarios de uma empresa
#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, salario_novo = 0, total_novo = 0, total_antigo = 0, diferenca = 0;
	int opcao;

	do{
		printf("\n0 - para sair\n1- para 0 < salario < 3000\n2- para 3000 <= salario < 6000\n3- 6000 <= salario < 10000\n4 salario > 10000");
		printf("\nOpcao: ");
		scanf("%i", &opcao);
		
		switch(opcao){
			case 1:
				printf("Digite o salario: ");
				scanf("%f", &salario);
				salario_novo = ((salario / 100) * 25) + salario;
				total_novo += salario_novo;
				total_antigo += salario;
				printf("Novo salario: %.2f\n", salario_novo);
				break;
			case 2:
				printf("Digite o salario: ");
				scanf("%f", &salario);
				salario_novo = ((salario / 100) * 20) + salario;
				total_novo += salario_novo;
				total_antigo += salario;
				printf("Novo salario: %.2f\n", salario_novo);
				break;
			case 3:
				printf("Digite o salario: ");
				scanf("%f", &salario);
				salario_novo = ((salario / 100) * 15) + salario;
				total_novo += salario_novo;
				total_antigo += salario;
				printf("Novo salario: %.2f\n", salario_novo);
				break;
			case 4:
				printf("Digite o salario: ");
				scanf("%f", &salario);
				salario_novo = ((salario / 100) * 10) + salario;
				total_novo += salario_novo;
				total_antigo += salario;
				printf("Novo salario: %.2f\n", salario_novo);
				break;
		}		
		
	} while (opcao != 0);
	
	diferenca = total_novo - total_antigo;
	
	printf("\nSoma dos salarios atuais: %.2f\nSoma dos salarios atuais: %.2f\nDiferenca entre os ajustes: %.2f", total_antigo, total_novo, diferenca);	
}