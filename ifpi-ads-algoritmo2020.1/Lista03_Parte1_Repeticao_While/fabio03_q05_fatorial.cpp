#include <iostream>
using namespace std;

int main (void)
{
    int numero;
    int i;
    int fat;
    
    cout << "Qual o numero que deseja saber o fatorial? ";
    cin >> numero;
    
    if (numero <= 0) {
        cout << "";
    } else {
        fat = numero;
        i = 1;
        while (i < numero) {
            fat = fat * (numero - i);
            i ++;
        }
    }
 
    cout << "Fatorial de " << numero << ": " << fat << endl;
    return 0;
}
