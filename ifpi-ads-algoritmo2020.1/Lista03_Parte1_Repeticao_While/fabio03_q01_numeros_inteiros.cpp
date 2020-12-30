#include <iostream>
using namespace std;

int main (void)
{
    int i = 1, N;
    cout << "Digite um numero: ";
    cin >> N;

    if (N <= 0) {
        cout << "";
    } else {
        while (i <= N) {
            cout << i << endl;
            i ++;
        }
    }

    return 0;
}