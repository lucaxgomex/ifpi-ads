//Censo populacional de uma cidade
#include <stdio.h>
#include <stdlib.h>

void result(int n, float sumSalary, int sumChildren, int percent) {
	/*
	def calc_media(soma, qtd):
    media = soma / qtd
    return med

	media_salario = calc_media(soma_salario, dado)
    media_filhos = calc_media(soma_filho, dado)
    perc_salario_ate_mil = (salario_ate_mil * 100) / dado

    print('--- Resultados ---')
    print(f'Média de salário da população: R${media_salario:.2f}')
    print(f'Média de filhos da população: {media_filhos}')
    print(f'Percentual de pessoas com salário até R$1000,00: {perc_salario_ate_mil:.2f}%')

	*/
	printf("\nMedia salarial: %.2f\n", sumSalary / n);
	printf("Media de filhos da populacao: %.1f\n", (float) sumChildren / n);
	printf("Percentual de pessoas com salario ate R$1000,00: %d %%\n", (percent * 100) / n);
}

void population() {
	int n, children, i = 0, sumChildren = 0, percent = 0;
	float salary, sumSalary = 0.0;

	printf("Informe a quantidade de habitantes a seguir: ");
	scanf("%d", &n);

	do {
		printf("Informe o salario: ");
		scanf("%f", &salary);

		printf("Informe a quantidade de filhos: ");
		scanf("%d", &children);

		if (salary <= 1000.0) {
			percent ++;
		}

		sumSalary += salary;
		sumChildren += children;
		i ++;

	} while (i < n);

	result(n, sumSalary, sumChildren, percent);
}

int main() {
	population();
	return 0;
}