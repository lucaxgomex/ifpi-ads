#include <iostream>
using namespace std;

int main (void)
{
    float denominador = 1;
    float soma = 0.0;
    int fim;

    cout << "Informe um numero: ";
    cin >> fim;

    while (denominador <= fim) {
        if (int(denominador) % 2 == 0) {
            soma -= (1 / denominador);    
        } else {
            soma += (1 / denominador);    
        }
        denominador ++;
    }
    cout << "Resultado da soma: " << soma << endl;
    return 0;
}