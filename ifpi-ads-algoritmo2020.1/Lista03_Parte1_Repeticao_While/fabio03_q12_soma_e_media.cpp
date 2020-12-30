#include <iostream>
using namespace std;

int main(void)
{
    int N, listaN;
    double media;
    int somatorio = 0;
    int i = 1;

    cout << "Qual a quantidade de numeros que se deseja trabalhar? ";
    cin >> N;

    while (i <= N) {
        cout << "Quais os numeros? ";
        cin >> listaN;
        somatorio = somatorio + listaN;
        i ++;
    }

    media = float(somatorio) / float(N);

    cout << endl << "Somatorio dos numeros: " << somatorio << endl;
    cout << "Media dos numeros: " << media;
    return 0;
}