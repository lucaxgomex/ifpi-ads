//Questionario de um cinema
#include <stdio.h>
#include <stdlib.h>

void meanAge(int age, int total) {
	float mean = age / total;

	printf("\nMedia das idades: %f\n", mean);
}

void regularAmount(int regular) {
	printf("\nPessoas que responderam <<regular>>: %d\n", regular);
}

void percentGood(int good, int total) {
	float percent = (good / total) * 100;

	printf("\nPorcentagem de quem respondem <<bom>>: %f%%\n", percent);
}

void getValues() {
	int op, age = 0, great = 0, good = 0, regular = 0, bad = 0, total;

	while (age != -1) {
		printf("\nInforme sua idade: ");
		scanf("%d", &age);

		printf("Qual sua opniao em relacao ao filme? ");
		scanf("%d", &op);

		switch (op) {
			case 1:
				great ++;
				age += age;
				break;
			case 2:
				good ++;
			case 3:
				regular ++;
				break;
			case 4:
				bad ++;
				break;
		}
	}

	total = great + good + regular + bad;

	meanAge(age, total);
	regularAmount(regular);
	percentGood(good, total);
}

int main() {
	getValues();
}