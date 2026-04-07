#include <iostream>
#include <climits>
#define CHECK_LIMITS(h, id, refH, refID, op) if((h) op (refH)) { (refH) = (h); (refID) = (id); }

using namespace std;

int main()
{

    int id, h, i = 0;
    int idHigh = 0, hHigh = INT_MIN;
    int idLow = 0, hLow = INT_MAX;

    cout << "--- MONITORAMENTO BIOMETRICO DE ALUNOS ---" << endl;


    for (; i < 10; i++, cout << ">> Registro " << i << " processado com sucesso." << endl) {
        cout << "\nDigite [ID do Aluno] [Altura em cm]: ";


        if (!(cin >> id >> h)) break;


        CHECK_LIMITS(h, id, hHigh, idHigh, >)
        CHECK_LIMITS(h, id, hLow, idLow, <)
    }

    cout << "\n" << string(40, '=') << endl;
    cout << "RESULTADOS FINAIS DA TURMA:" << endl;
    cout << "ALUNO MAIS ALTO  -> ID: " << idHigh << " | Altura: " << hHigh << "cm" << endl;
    cout << "ALUNO MAIS BAIXO -> ID: " << idLow << " | Altura: " << hLow << "cm" << endl;
    cout << string(40, '=') << endl;

    return 0;
}
