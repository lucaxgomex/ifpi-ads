#include <stdio.h>
#include <stdlib.h>

int main() {
	char numbers[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}, option;

	/*
	printf("     |     |\n");
	printf("  %c  |  %c  |  %c\n", numbers[0], numbers[1], numbers[2]);
	printf("_____|_____|_____\n");
	printf("     |     |\n");
	printf("  %c  |  %c  |  %c\n", numbers[3], numbers[4], numbers[5]);
	printf("_____|_____|_____\n");
	printf("     |     |\n");
	printf("  %c  |  %c  |  %c\n", numbers[6], numbers[7], numbers[8]);
	printf("     |     |\n");
	*/

	printf("Informe um valor a seguir: ");
	scanf("%c", &option);

	switch (option) {
		case '1':
			numbers[0] = 'X';
			break;
		case '2':
			numbers[1] = 'X';
			break;
		case '3':
			numbers[2] = 'X';
			break;
		case '4':
			numbers[3] = 'X';
			break;
		case '5':
			numbers[4] = 'X';
			break;
		case '6':
			numbers[5] = 'X';
			break;
		case '7':
			numbers[6] = 'X';
			break;
		case '8':
			numbers[7] = 'X';
			break;
		case '9':
			numbers[8] = 'X';
			break;
		default:
			printf("Informe novamente: ");
			scanf("%c", &option);
	}

	printf("     |     |\n");
	printf("  %c  |  %c  |  %c\n", numbers[0], numbers[1], numbers[2]);
	printf("_____|_____|_____\n");
	printf("     |     |\n");
	printf("  %c  |  %c  |  %c\n", numbers[3], numbers[4], numbers[5]);
	printf("_____|_____|_____\n");
	printf("     |     |\n");
	printf("  %c  |  %c  |  %c\n", numbers[6], numbers[7], numbers[8]);
	printf("     |     |\n");

	return 0;
}