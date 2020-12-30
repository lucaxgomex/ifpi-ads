#include <iostream>
using namespace std;

int main (void) 
{
    int a1; 
    int razao;
    int limite;
    
    cout << "Qual o primeiro termo da progressao: ";
    cin >> a1;

    cout << "Informe a razao: ";
    cin >> razao;

    cout << "Informe o limite: ";
    cin >> limite;

    if (a1 >= limite) {
        cout << "";
    } else { 
        while (a1 < limite) {
            cout << "\nTermos da PA: " << a1;
            a1 = a1 * razao;
        }
    }
    return 0;
}