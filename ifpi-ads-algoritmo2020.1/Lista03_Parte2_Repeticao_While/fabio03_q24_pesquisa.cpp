#include <iostream>
using namespace std;

int main (void)
{
    int N;
    int i = 1;
    double numeroFilhos = 0.0;
    double salario = 0.0;
    double mediaSalario, mediaFilhos;
    float percent;

    cout << "Com quantos habitantes sera realizada a pesquisa? ";
    cin >> N;

    while (i <= N) {
        cout << "Informe o salario:\n";
        cin >> salario;
        salario = salario + salario;

        cout << "Informe a quantidade de filhos:\n";
        cin >> numeroFilhos;
        numeroFilhos = numeroFilhos + numeroFilhos;

        if (salario <= 1000) {
            percent = salario / 100;
        }
        
        i++;
    }
    mediaSalario = salario / N;
    mediaFilhos = numeroFilhos / N;

    cout << "\nMedia salarial: " << mediaSalario << endl;
    cout << "Media de filhos: " << mediaFilhos << endl;
    cout << "Percentual de ate R$ 1000,00: " << percent << "%"<< endl;
    cout << numeroFilhos;

    return 0;
}