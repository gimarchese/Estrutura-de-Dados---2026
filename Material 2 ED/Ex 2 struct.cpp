#include <iostream>
#include <string>
using namespace std;

struct livro{
    string titulo, autor;
    int ano;
};

int main() {

    setlocale(LC_ALL, "Portuguese");
    livro Livro;
    string tituloParada = "harry potter";

    do{
        if(Livro.titulo == tituloParada){
            break;
        }

        cout << "Informe o titulo do livro: ";
        getline(cin, Livro.titulo);
        cout << "Informe o autor: ";
        getline(cin, Livro.autor);
        cout << "Informe o ano: ";
        cin >> Livro.ano;
        cout << endl;
        cin.ignore();
    } while(true);

    return 0;
}
