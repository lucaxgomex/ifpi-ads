#include <iostream>
using namespace std;

int main (void)
{
    int N;
    int limiteInferior;
    int limiteSuperior;
    int multiplo;

    cout << "Informe um numero: ";
    cin >> N;

    cout << "Informe o limite inferior: ";
    cin >> limiteInferior;

    cout << "Informe o limite superior: ";
    cin >> limiteSuperior;

    if (limiteInferior == limiteSuperior) {
        cout << "";
    } else {
        while (limiteInferior < limiteSuperior) {
            multiplo = limiteInferior * N;
            cout << "Multiplo de " << N << ": " << multiplo << endl;
            limiteInferior ++;
        }
    }
}
