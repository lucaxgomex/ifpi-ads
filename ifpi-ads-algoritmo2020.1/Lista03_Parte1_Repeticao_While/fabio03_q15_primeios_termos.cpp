#include <iostream>
using namespace std;

int main (void)
{
    int N;
    int i = 1; 
    int termos = 1;
    int razao = 2;

    cout << "Informe a quantidade de numeros da sequencia: ";
    cin >> N;

    if (N <= 0) {
        cout << "";
    } else {
        while (i <= N) {
            cout << "\nTermos: " << termos;
            termos = termos + razao;
            razao ++;
            i ++;
        }
    }
    return 0;
}
