#include <iostream>
using namespace std;

int main (void)
{
    int N, listaN, maior;
    int i = 1; //Incrementador para ler a lista de numeros;

    cout << "Quantos numeros haverao na lista? ";
    cin >> N;

    while (i <= N) {
        cout << "Informe os numeros: ";
        cin >> listaN;
        
        /*
        O primeiro valor digitador da lista sera atribuido a variavel maior;
        */
        if (i == 1) {
            maior = listaN;
        }
        
        /*
        Havera uma comparacao relacional entre a varivael maior e a variavel listaN;
        Sera verificado se o valor da lista sera maior que o da variavel maior;
        */
        if (listaN > maior) {
            maior = listaN;
        }
        
        i ++;
    }
    cout << endl << "O maior numero e: " << maior << endl;
    return 0;
}