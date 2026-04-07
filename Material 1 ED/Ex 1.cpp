#include <iostream>
#include <string>

using namespace std;

#define NOMES 10

int main() {
    string nomes[NOMES];
    string busca;
    bool encontrado = false;

    cout << "Digite 10 nomes:" << endl;
    for (int i = 0; i < NOMES; i++) {
        cout << "Nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    cout << "\n Digite um nome para buscar: ";
    cin >> busca;

    for (int i = 0; i < NOMES; i++) {
        if (nomes[i] == busca) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "Achei" << endl;
    } else {
        cout << "Nao achei" << endl;
    }
}
