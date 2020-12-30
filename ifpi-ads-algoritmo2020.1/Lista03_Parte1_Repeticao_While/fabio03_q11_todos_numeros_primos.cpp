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
        cout << "\nNumero primo da sequencia: " << 2 << endl;
        cout << "\nNumero primo da sequencia: " << 3 << endl;
        cout << "\nNumero primo da sequencia: " << 5 << endl;
        cout << "\nNumero primo da sequencia: " << 7 << endl;
        while (limiteInferior <= limiteSuperior) {
            if ((limiteInferior % 2 != 0) 
            && (limiteInferior % 3 != 0) 
            && (limiteInferior % 5 != 0) 
            && (limiteInferior % 7 != 0)
            && (limiteInferior > 1)){
                cout << "\nNumero primo da sequencia: " << limiteInferior << endl;
            }
            limiteInferior ++;
        }
    }
}