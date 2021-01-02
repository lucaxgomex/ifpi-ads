//Imposto e salario liquido de funcionarios
#include <stdio.h>
#include <stdlib.h>

float INSS(float totalValue) {
	return totalValue * 0.085;
}

float IR(float totalValue) {
	return totalValue * 0.05;
}

void result(float total, float discount1, float discount2, float salary) {
	printf("\nValor total inicial: R$ %.2f\n", total);
	printf("\nDesconto INSS: R$ %.2f\n", discount1);
	printf("\nDesconto IR: R$ %.2f\n", discount2);
	printf("\nSalario Liquido: R$ %.2f\n", salary);	
}

void employees() {
	int number, code, hours, children;
	float discount1, discount2, salary, total;

	printf("Informe o numero de funcionarios: ");
	scanf("%d", &number);

	for (int i = 0; i < number; i ++) {
		printf("\nInforme o codigo, o valor de horas trabalhadas e a quantidade de dependentes: ");
		scanf("%d %d %d", &code, &hours, &children);

		total = (hours * 12) + (children * 40);

		discount1 = INSS(total);

		discount2 = IR(discount1);

		salary = total - (discount1 + discount2);

		result(total, discount1, discount2, salary);
	}
}

int main() {
	employees();
	return 0;
}