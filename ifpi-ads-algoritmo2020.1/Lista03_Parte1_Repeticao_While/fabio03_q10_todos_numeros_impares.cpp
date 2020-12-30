#include <iostream>
using namespace std;

int main (void) 
{
    int limiteInferior;
    int limiteSuperior;

    cout << "Informe o limite inferior: ";
    cin >> limiteInferior;

    cout << "Informe o limite superior: ";
    cin >> limiteSuperior;

    if (limiteInferior >= limiteSuperior) {
        cout << "";
    } else {
        while (limiteInferior < limiteSuperior) {
            if (limiteInferior % 2 != 0) {
                cout << "Impar: " << limiteInferior << endl;
            }
            limiteInferior ++;
        }
    }
}