#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    int fun, horas, dependentes, salarioHoras, salarioDependentes;
    float salario, INSS, IR;
    int i = 1;

    cout << "Informe a quantidade de funcionarios: ";
    cin >> fun;

    while (i <= fun) {
        cout << "\nQuantidade de horas trabalhadas: ";
        cin >> horas;
        salarioHoras = horas * 12.0;

        cout << "Quantidade de dependentes: ";
        cin >> dependentes;
        salarioDependentes = dependentes * 40.0;

        INSS = ((salarioHoras + salarioDependentes) * 8.5) / 100;
        IR = ((salarioHoras + salarioHoras) * 5) / 100;
        salario = (salarioHoras + salarioDependentes) - (INSS + IR);

        cout << "Salario total: R$" << salario << "\n";
        i ++;
    }
    return 0;
}