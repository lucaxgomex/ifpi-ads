//Conjunto uniao e conjunto intersecao
#include <stdio.h>
#include <stdlib.h>

//Criar um array de intersecao
void getIntersection(int a[], int b[], int number) {
	int inter[] = {};

	for (int i = 0; i < number; i ++) {
		for (int j = 0; i < number; i ++) {
			if (a[i] == b[j]) {
				inter[j] = b[j];
			}
		}
	}
	printf("%d", inter[0]);
}

//Criar um array para uniao
void getUnion(int a[], int b[], int number) {
	int u[] = {}, i = 0;

	for (i = 0; i < number; i ++) {
		for (i = 0; i < number; i ++) {
			u[i] = b[i];
		}
		u[i] = a[i];
	}

	for (i = 0; i < number; i ++) {
		printf("%d", u[i]);
	}
}

void arrays() {
	int n, a[] = {}, b[] = {}, i = 0;

	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);

	for (i = 0; i < n; i ++) {
		printf("Elementos de A: ");
		scanf("%d", &a[i]);		
	}

	for (i = 0; i < n; i ++) {
		printf("Elementos de B: ");
		scanf("%d", &b[i]);		
	}
	getUnion(a, b, n);
	getIntersection(a, b, n);
}

int main() {
	arrays();
	return 0;
}