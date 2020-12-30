/*
#ifndef FOO_H_
#define FOO_H_

void message();	

void doubleMessage();

#endif
*/
#include <stdio.h>
#define PI 3.14

//Q-01
float kilometerPerHour(float value) {
	return (value * 3.6);
}

//Q-02
float meterPerSecond(float value) {
	return (value / 3.6);
}

//Q-03
float dollarToReal(float value) {
	return (value * 5.22);
}

//Q-05
int squareArea(int value) {
	return (value * value);
}

//Q-04
float triangleArea(int firstValue, int secondValue) {
	return ((firstValue * secondValue) / 2);
}

//Q-06
int rectangleArea(int firstValue, int secondValue) {
	return (firstValue * secondValue);
}

//Q-07
float length(float value) {
	return (2 * PI * value);
}

//Q-08
float sphereVolume(float value) {
	int tripleValue = (value  * value * value);

	return ((4 * PI * tripleValue) / 3);
}

//Q-09
float CelsiusToFarenheit(float value) {
	return ((9 * value + 160) / 5);
}

//Q-10
float FarenheitToCelsius(float value) {
	return ((5 * value - 160) / 9);
}

//Q-11
int fatorial(int value) {
	int fat = 1;

	do {
		fat *= value;
		value --;
	} while (value > 0);

	return fat;
}

//Q-12
void isPrime(int value) {
	int flag = 0;

    for (int i = 2; i <= value / 2; i ++) {
        if (value % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
    	printf("\nNumero Primo!\n");
    }
    else {
    	printf("\nNumero nao-Primo!\n");	
    }
}

//Q-13
void validDate(int day, int month, int year) {
	if ((day <= 0) || (day > 31)) {
		if ((month <= 0) || (month > 12)) {
			if (year <= 0) {
				printf("\nData Invalida!\n");
			}
		}
	} else {
		printf("\nData Valida!\n");
	}
}

//Q-15
int mdc(int firstValue, int secondValue) {
	if (secondValue == 0) {
		return firstValue;
	} else {
		return mdc(secondValue, firstValue % secondValue);
	}
}


//Q-14
int mmc(int firstValue, int secondValue) {
	return firstValue * (secondValue / mdc(firstValue, secondValue));
}

//Q-16
void leapYear(int year) {
	if (year % 4 == 0) {
		if (year % 100 != 0) {
			printf("\nAno Bissexto!\n");
		}
	} else {
		printf("\nAno nao-Bissexto!\n");
	}
}

//Q-18
void fibonacciSequence(int value) {
	int fib1 = 1, fib2 = 1, soma;         

	for (int i = 1; i <= value; i = i + 1) {                                     
		soma = fib1 + fib2;                    
		fib1 = fib2;                           
		fib2 = soma;           

		printf("\n%d\n", fib2);
  	}                                        
  	//return fib2;
}

//Q-20
int sumAll(int value) {
	int sum = 0; 

	for (int i = 0; i <= value; i ++) {
		sum += i;
	}

	return sum;
}