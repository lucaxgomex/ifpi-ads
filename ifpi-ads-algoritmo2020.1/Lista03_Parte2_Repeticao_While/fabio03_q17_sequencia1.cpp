#include <iostream>
using namespace std;

int main (void)
{
    int fim;
    float soma = 0.0;
    float denomimador = 1.0;

    cout << "Informe um numero: ";
    cin >> fim;

    while (denomimador <= fim) {
        soma += (1 / denomimador);  
        denomimador ++;
    }
    cout << "Resultado da soma: " << soma << endl;
    return 0;
}