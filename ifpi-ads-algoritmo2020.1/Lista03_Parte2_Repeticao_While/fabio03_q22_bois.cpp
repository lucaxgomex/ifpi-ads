#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    string id, id_maior, id_menor;
    int fichas;
    int i = 1;
    float maior = 0.0;
    float menor = 0.0;
    float peso;
    cout << "Quantas fichas serão analisadas? ";    
    cin >> fichas;

    while (i <= fichas) {
        cout << "\nQual a identificacao do boi? ";
        cin >> id;

        cout << "Informe seu peso: ";
        cin >> peso;

        if (peso > maior) {
            id_maior = id;
            maior = peso;
        }

        if (peso < maior) {
            id_menor = id;
            menor = peso;
        }
        i ++;
    }
    cout << "\nMaior peso: " << maior << endl;
    cout << "Numero de identificacao: " << id_maior << endl;

    cout << "\nMenor = " << menor << endl;
    cout << "Numero de identificacao: " << id_menor << endl;
    return 0;
}
