#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int voto;
    int somaX = 0, somaY = 0, somaNulo = 0, somaBranco = 0, somaTotal = 0;

    cout << endl << "1 - Candidato X" << endl << "2 - Candidato Y" << endl << "3 - Voto Nulo" << endl << "4 - Voto em Branco" << endl << endl << "Insira sua escolha de voto. (Use 0 para encerrar as votacoes): ";
    do
    {
        cout << endl << "R. ";
        cin >> voto;

        switch(voto){

        case 0:
            cout << endl;
            break;

        case 1:
            cout << "Voto efetuado: candidato X" << endl;
            somaX = somaX + 1;
            break;

        case 2:
            cout << "Voto efetuado: candidato Y " << endl;
            somaY = somaY + 1;
            break;

        case 3:
            cout << "Voto efetuado: nulo " << endl;
            somaNulo = somaNulo + 1;
            break;

        case 4:
            cout << "Voto efetuado: branco " << endl;
            somaBranco = somaBranco + 1;
            break;

        default:
            cout << "Opcao de voto invalido, tente novamente." << endl;

        }
    }while(voto != 0);

    somaTotal = somaX + somaY + somaNulo + somaBranco;

    float porcentagemX = (somaX * 100.0) / somaTotal;
    float porcentagemY = (somaY * 100.0) / somaTotal;
    float porcentagemNulo = (somaNulo * 100.0) / somaTotal;
    float porcentagemBranco = (somaBranco * 100.0) / somaTotal;

    cout << fixed << setprecision(2);
    cout << "Taxa de votos do Candidato X: " << porcentagemX << "%" << endl << "Taxa de votos do Candidato Y: " << porcentagemY << "%" << endl << "Taxa de votos Nulo: " << porcentagemNulo << "%" << endl << "Taxa de votos em Branco: " << porcentagemBranco << "%" << endl;
}
