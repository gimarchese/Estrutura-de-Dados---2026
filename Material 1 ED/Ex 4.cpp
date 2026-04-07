#include <iostream>
using namespace std;

#define TAMANHO 5

int main() {

    int numeros[TAMANHO];

    cout << "Digite 20 numeros:\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "\nNumeros na ordem inversa:\n";
    for (int i = (TAMANHO-1); i >= 0; i--) {
        cout << numeros[i] << " ";
    }
}
