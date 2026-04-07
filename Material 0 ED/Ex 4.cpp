#include <iostream>

using namespace std;

int main()
{
    int salario;

    cout << "Informe o valor do seu salario: ";
    cin >> salario;
    cout << "Salario Apos Reajuste: ";

    if (salario < 1000){
        cout << salario + (salario * 0.15);
    }

    else if (salario >= 1000 && salario <= 1500){
        cout << salario + (salario * 0.10);
    }

    else if (salario > 1500){
        cout << salario + (salario * 0.05);
    }
}
