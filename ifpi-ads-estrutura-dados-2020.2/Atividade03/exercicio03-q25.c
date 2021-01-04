//Canal de TV
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int canal, pessoas;
	
	float total, _2, _4, _5, _7, _10;
	
	printf("Canal: ");
	scanf("%i", &canal);
	
	do {
		printf("Assistindo: ");
		scanf("%i", &pessoas);
		switch(canal){
			case 2:
				_2 += pessoas;
				break;
			case 4:
				_4 += pessoas;
				break;
			case 5:
				_5 += pessoas;
				break;
			case 7:
				_7 += pessoas;
				break;
			case 10:
				_10 += pessoas;
				break;
			default:
				break;
		}
		
		printf("Canal: ");
		scanf("%i", &canal);	
		
		
	} while (canal != 0);
	
	total = (_2 + _4 + _5 + _7 + _10);
	
	_2 = (_2 / total) * 100;
	_4 = (_4 / total) * 100;
	_5 = (_5 / total) * 100;
	_7 = (_7 / total) * 100;
	_10 = (_10 / total) * 100;
	
	printf("\nCanal 2: %.2f ", _2);
	printf("\nCanal 4: %.2f ", _4);
	printf("\nCanal 5: %.2f ", _5);
	printf("\nCanal 7: %.2f ", _7);
	printf("\nCanal 10: %.2f ", _10);
	return 0;
}