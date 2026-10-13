#include <iostream>
using namespace std;

void merge(int v[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int esquerda[n1], direita[n2];

    for (int i = 0; i < n1; i++)
        esquerda[i] = v[inicio + i];
    for (int j = 0; j < n2; j++)
        direita[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            v[k] = esquerda[i];
            i++;
        } else {
            v[k] = direita[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        v[k] = esquerda[i];
        i++;
        k++;
    }

    while (j < n2) {
        v[k] = direita[j];
        j++;
        k++;
    }
}

void mergeSort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}

int main() {
    int v[10];

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }

    mergeSort(v, 0, 9);

    int menor = v[0];
    int maior = v[9];

    int contMenor = 0, contMaior = 0;

    for (int i = 0; i < 10; i++) {
        if (v[i] == menor) contMenor++;
        if (v[i] == maior) contMaior++;
    }

    cout << "\nVetor ordenado:\n";
    for (int i = 0; i < 10; i++) {
        cout << v[i] << " ";
    }

    cout << "\n\nMenor numero: " << menor << " (aparece " << contMenor << " vezes)";
    cout << "\nMaior numero: " << maior << " (aparece " << contMaior << " vezes)\n";

    return 0;
}
