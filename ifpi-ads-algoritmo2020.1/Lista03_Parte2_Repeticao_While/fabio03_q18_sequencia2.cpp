#include <iostream>
using namespace std;

int main (void)
{
    float numerador = 1;
    float denominador;
    float fim;
    float soma = 0.0;

    cout << "Informe um numero: ";
    cin >> fim;

    denominador = fim;

    while (numerador <= fim) {
        soma += (numerador / denominador);
        numerador ++;
        denominador --;
    }

    cout << "Resultado da soma: " << soma << endl;
    return 0;
}