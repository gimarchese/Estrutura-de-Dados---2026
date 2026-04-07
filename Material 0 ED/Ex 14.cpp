#include <iostream>
using namespace std;

int main()
{
    int esc;

    cout << endl << "Escolha a opcao desejada: " << endl << "1 - Setor Geral" << endl << "2 - Setor Financeiro" << endl << "3 - Setor Comercial" << endl << "R.";

    do{
        cin >> esc;
    switch(esc){
    case 1:
        cout << "Opcao selecionada: Setor Geral" << endl;
        break;

    case 2:
        cout << "Opcao selecionada: Setor Financeiro" << endl;
        break;

    case 3:
        cout << "Opcao selecionada: Setor Comercial" << endl;
        break;

    default:
        cout << "Erro! Insira uma opcao valida: " << endl << "R.";
    }
    }while (esc < 1 || esc > 3);
}
