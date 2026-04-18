#include <iostream>
#include <string>

using namespace std;

struct AvaliacaoFilme{
    string titulo;
    int enredo;
    int atuacao;
    int efeitosEspeciais;
};

int main(){

    setlocale(LC_ALL, " ");

    AvaliacaoFilme filme;
    char continuar = 's';
    int totalFilmes = 0;
    double somaEnredo = 0;
    double somaAtuacao = 0;
    double somaEfeitosEspeciais = 0;

    while(continuar == 's' || continuar == 'S'){

        cout << "Digite o titulo do filme: ";
        getline(cin, filme.titulo);
        cout << "Avalie o enredo do filme (1 a 5): ";
        cin >> filme.enredo;
        cout << "Avalie a atuacao no filme (1 a 5): ";
        cin >> filme.atuacao;
        cout << "Avalie os efeitos especiais do filme (1 a 5): ";
        cin >> filme.efeitosEspeciais;
        cin.ignore();

        totalFilmes++;
        somaEnredo += filme.enredo;
        somaAtuacao += filme.atuacao;
        somaEfeitosEspeciais += filme.efeitosEspeciais;

        cout << "Filme: " << filme.titulo << "\n Enredo: " << filme.enredo << "\n Atuacao: " << filme.atuacao << "\n Efeitos Especiais: " << filme.efeitosEspeciais << endl;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore();
    }

    if (totalFilmes > 0){
        double mediaEnredo = somaEnredo / totalFilmes;
        double mediaAtuacao = somaAtuacao / totalFilmes;
        double mediaEfeitosEspeciais = somaEfeitosEspeciais / totalFilmes;

        cout << "\nMedia das Avaliacoes:" << endl;
        cout << "Enredo: " << mediaEnredo << "\n Atuacao: " << mediaAtuacao << "\n Efeitos Especiais: " << mediaEfeitosEspeciais << endl;
    }

    else{
        cout << "\nNenhum filme avaliado." << endl;
    }

    return 0;
}
