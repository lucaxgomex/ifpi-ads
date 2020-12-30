#include <iostream>
using namespace std;

int main (void)
{
    float denominador;
    float numerador = 1.0;
    float soma = 0.0;

    cout << "Informe um numero: ";
    cin >> denominador;

    while (denominador > 0) {
        if (int(numerador) % 2 != 0) {
            soma += (numerador / denominador);
        } else {
            soma -= (denominador / numerador);
        }
        denominador --;
        numerador ++;
    }
    cout << "Resultado da soma: " << soma << endl;
    return 0;
}