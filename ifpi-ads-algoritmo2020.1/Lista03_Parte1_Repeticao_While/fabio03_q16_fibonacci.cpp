#include <iostream>
using namespace std;

int main (void)
{
    int primeiroValor = 0;
    int segundoValor = 1;
    int i = 1;
    int N;
    int fibonacci;

    cout << "Informe a quantidade de numeros: ";
    cin >> N;

    if (N <= 2) {
        cout << "";
    } else {
        cout << "\nSequencia Fibonacci: " << primeiroValor << endl;
        while (i < N) {
            fibonacci = primeiroValor + segundoValor;
            segundoValor = primeiroValor;
            primeiroValor = fibonacci;

            cout << "Sequencia Fibonacci: " << fibonacci << endl;
            i ++;
        } 
    }

    return 0;
}