#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pedido{
    string nomePrato;
    int quantidade;
    float precoTotal;
};

int main(){

    setlocale(LC_ALL, "");

    vector<Pedido> pedidos;
    Pedido pedidoAtual;
    float precoParada = 0.0;

    cout << " -- Programa de Registro de Pedidos do Restaurante --" << endl;
    cout << "\nInsira 0 no preco total para finalizar o registro de pedidos." << endl;

    do {
        cout << " Digite o nome do prato: ";
        getline(cin, pedidoAtual.nomePrato);
        cout << " Digite a quantidade do prato: ";
        cin >> pedidoAtual.quantidade;
        cout << " Digite o preco total do pedido: ";
        cin >> pedidoAtual.precoTotal;
        cout << endl;
        cin.ignore();

        if (pedidoAtual.precoTotal != precoParada) {
            pedidos.push_back(pedidoAtual);
        }

    } while (pedidoAtual.precoTotal != precoParada);

    cout << "\nRegistro de Pedidos:" << endl;

    for (const auto& pedido : pedidos) {
        cout << "Prato: " << pedido.nomePrato
         << ", Quantidade: " << pedido.quantidade
         << ", Preco Total: R$" << pedido.precoTotal << endl;
    }

    return 0;
}
