#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int * returnArray() {
    int array[10];
    static int randomValue[10];
    int x, y, p;
    int count;
    int i = 0;

    srand(time(NULL));

    for (count = 0; count < 10;  count ++) {
        array[count]=rand()%10+1;
    }

    while (i < 10) {
        int r = rand() % 10 + 1;

        for (x = 0; x < i; x ++) {
            if (array[x] == r) {
                break;
            }
        }
        if (x == i) {
            array[i++] = r;
        }
    }
    for (p = 0; p < 10; p ++) {
        randomValue[p] = array[p];
    }
    return randomValue;
}

int main() {
	char numbers[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int *randomValues = returnArray(), randomOption, option;
    
    for (int counter; counter < 9; counter ++) {
    	char winner;
    	randomOption = randomValues[counter];

		/*Valor printado pelo usuário*/
		printf("Informe um valor a seguir: ");
		scanf("%d", &option);

		switch (option) {
			case 1:
				numbers[0] = 'X';
				break;
			case 2:
				numbers[1] = 'X';
				break;
			case 3:
				numbers[2] = 'X';
				break;
			case 4:
				numbers[3] = 'X';
				break;
			case 5:
				numbers[4] = 'X';
				break;
			case 6:
				numbers[5] = 'X';
				break;
			case 7:
				numbers[6] = 'X';
				break;
			case 8:
				numbers[7] = 'X';
				break;
			case 9:
				numbers[8] = 'X';
				break;
			default:
				break;
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

		/*Limpeza do console após ter printado o valor de input do usuário*/
		system("clear");

		switch (randomOption) {
			case 1:
				numbers[0] = 'O';
				break;
			case 2:
				numbers[1] = 'O';
				break;
			case 3:
				numbers[2] = 'O';
				break;
			case 4:
				numbers[3] = 'O';
				break;
			case 5:
				numbers[4] = 'O';
				break;
			case 6:
				numbers[5] = 'O';
				break;
			case 7:
				numbers[6] = 'O';
				break;
			case 8:
				numbers[7] = 'O';
				break;
			case 9:
				numbers[8] = 'O';
				break;
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

		/*
		if (counter >= 3) {
			if (option )
		} 
		*/		
	}
	return 0;
}