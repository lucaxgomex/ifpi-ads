#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    int N, voto;
    int candidato01 = 0;
    int candidato02 = 0;
    int candidato03 = 0;
    int votoNulo = 0; 
    int votoBranco = 0;
    string vencedor;
    int i = 1;

    cout << "Quantos eleitores irao participar da votacao? ";
    cin >> N;

    while (i <= N) {
        cout << "Informe seu foto: ";
        cin >> voto;

        switch (voto) {
            case 9:
                votoNulo ++;
                break;
            case 0:
                votoBranco ++;
                break;
            case 1:
                candidato01 ++;
                break;
            case 2:
                candidato02 ++;
                break;
            case 3:
                candidato03 ++;
                break;
            default:
                break;
        }

        if ((candidato01 == candidato02) && (candidato01 == candidato03) && (candidato02 == candidato03)) {
            vencedor = "Houve um empate";
        }

        if ((candidato01 > candidato02) and (candidato01 > candidato03)) {
            vencedor = "Primeiro Candidato (1)";
        }

        if ((candidato02 > candidato01) and (candidato02 > candidato03)) {
            vencedor = "Segundo Candidato (2)";
        }

        if ((candidato03 > candidato01) and (candidato03 > candidato02)) {
            vencedor = "Terceiro Candidato (3)";
        }

        i ++;
    }
    cout << "\nPrimeiro candidato: " << candidato01 << " votos." << endl;
    cout << "Segundo candidato: " << candidato02 << " votos." << endl;
    cout << "Terceiro candidato: " << candidato03 << " votos." << endl;
    cout << "Total de votos nulos: " << votoNulo << endl;
    cout << "Total de votos em branco: " << votoBranco << endl;
    cout << "\nVencedor: " << vencedor << endl;
    return 0;
}