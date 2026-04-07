#include <iostream>
using namespace std;

int main()
{
    int escolha;
    float preco;

    cout << "Insira o valor do produto: ";
    cin >> preco;
    cout << endl << "Condicao de pagamento: " << endl << "1 - A vista em dinheiro ou cheque, 10% desconto " << endl << "2 - A vista com cartao de credito, 5% desconto " << endl;
    cout << "3 - Em 2x, preco normal de etiqueta sem juros " << endl << "4 - Em 3x, preco de etiqueta com acrescimo de 10%" << endl << endl << "Escolha a opcao de pagamento desejada: ";
    cin >> escolha;

    switch (escolha){

    case 1:
        cout << "Opcao escolhida: A vista em dinheiro/cheque" << endl << "Valor final: " << preco - (preco * 0.10) << endl;
        break;

    case 2:
        cout << "Opcao escolhida: A vista com cartao de credito" << endl << "Valor final: " << preco - (preco * 0.05) << endl;
        break;

    case 3:
        cout << "Opcao escolhida: Em 2x Sem Juros" << endl << "Valor final: " << preco << endl;
        break;

    case 4:
        cout << "Opcao escolhida: Em 3x c/ Juros de 10%" << endl << "Valor final: " << preco + (preco * 0.10) << endl;
        break;

    default:
        cout << "Opcao de pagamento invalida! " << endl;
    }
}
