#include <iostream>
using namespace std;

int main (void)
{
    float denominador = 1.0;
    float numerador = 1.0;
    float soma = 0.0;
    int fim;

    cout << "Informe um numero: ";
    cin >> fim;

    while (denominador <= fim) {
        soma += (numerador / denominador);
        numerador += 2;
        denominador ++;
    }
    cout << "Resultado da soma: " << soma << endl;
}