#include <iostream>
using namespace std;

int main (void)
{
    int numero;
    int i = 1;

    cout << "Qual o numero da tabuada? ";
    cin >> numero;

    if ((numero < 1) || (numero > 10)) {
        cout << "";
    } else {
        while (i <= 10) {
            int multi = numero * i;
            cout << numero << " x " << i << " = " << multi << endl;
            i ++;
        }
    }
}