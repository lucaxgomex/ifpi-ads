#include <iostream>
#include <math.h>
using namespace std;

int main (void)
{
    int N, qp, mostraQP;
    int m = 1;

    cout << "Digite um numero: ";
    cin >> N;

    if (N <= 0) {
        cout << "";
    }
    else {
        while (m <= N) {
            qp = pow(m, 2);

            if (qp <= N) {
                mostraQP = qp;
            }
            m ++;
        }

        cout << "\nO quadrado mais proximo ou igual a " << N << ": " << mostraQP << endl;
        cout << "A raiz quadrada de " << mostraQP << ": " << sqrt(mostraQP) << endl;
    }

    return 0;
}