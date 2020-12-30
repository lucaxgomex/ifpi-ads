#include <iostream>
using namespace std;

int main (void)
{
    int i = 1, N;
    cout << "Digite um numero: ";
    cin >> N;

    if (N <= 0){
        cout << "";
    } else {
        while (i <= N) {
            if (i % 2 == 0){
                cout << i << endl;
                i ++;
            } else {
                i ++;
            }
            
        }
    }

    return 0;
}