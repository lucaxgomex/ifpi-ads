//Media ponderada a partir de uma nota e de um peso
#include <stdio.h>
#include <stdlib.h>

int grade1() {
	float grade;
	int p;

	printf("Informe a nota e o peso da primeira nota: ");
	scanf("%f %i", &grade, &p);

	return grade * p;
}

int grade2() {
	float grade;
	int p;

	printf("Informe a nota e o peso da segunda nota: ");
	scanf("%f %i", &grade, &p);

	return grade * p;
}

int grade3() {
	float grade;
	int p;

	printf("Informe a nota e o peso da terceira nota: ");
	scanf("%f %i", &grade, &p);

	return grade * p;
}

void result() {
	float m = (grade1() + grade2() + grade3()) / 3;

	printf("\nValor da media ponderada: %.2f", m);
	printf("\n");
}

int main() {
	result();
	return 0;
}