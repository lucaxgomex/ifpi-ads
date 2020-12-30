#include <iostream>
using namespace std;

int main (void)
{
    int N;
    int soma = 1;
    int i = 1;
    
    cout << "Digite um numero: ";
    cin >> N;

    if (N < i) {
    	cout << "";
    } else {
        while (i < N) {
            i ++;
            soma += i;
        }
        cout << "Soma dos numeros: " << soma << endl;
    }

    return 0;
}
