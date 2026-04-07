#include <iostream>
using namespace std;

int main()
{
    int quant, opn;
    int somaIdd = 0;
    float mediaIdd = 0;
    float contOtimo = 0, contBom = 0, contRegular = 0, contRuim = 0, contTotal = 0;

    cout << "Informe quantas pessoas vao avaliar: ";
    cin >> quant;

    int idd[quant];
    string nome[quant];

    for(int i = 0; i < quant; i++){
        cout << "Entre com seu nome, idade e opniao em relacao ao filme, respectivamente. " << endl << endl << "Nome: ";
        cin >> nome[i];
        cout << "Idade: ";
        cin >> idd[i];
        cout << "Opniao quanto ao filme: " << endl << "1 - Otimo" << endl << "2 - Bom" << endl << "3 - Regular" << endl << "4 - Ruim" << endl << "R.";
        cin >> opn;
        cout << endl;
        switch(opn){
        case 1:
            contOtimo = contOtimo + 1;
            break;

        case 2:
            contBom = contBom + 1;
            break;

        case 3:
            contRegular = contRegular +1;
            break;

        case 4:
            contRuim = contRuim + 1;
            break;

        default:
            cout << "Opcao de avaliacao indisponivel" << endl;
        }

        }

     for(int i = 0; i < quant; i++){
         somaIdd = idd[i] + somaIdd;
    }

        mediaIdd = somaIdd / quant;
        contTotal = contOtimo + contBom + contRegular + contRuim;

    cout << "Quantidade de pessoas que avaliaram: " << quant << endl << endl << "Media de idade dessas pessoas: "  << mediaIdd << endl << endl;
    cout << "Porcentagem de cada resposta:" << endl << "Otimo - " << (contOtimo * 100) / contTotal << "%" << endl << "Bom - " << (contBom * 100) / contTotal << "%" << endl << "Regular - " << (contRegular * 100) / contTotal << "%" << endl << "Ruim - " << (contRuim * 100) / contTotal << "%" << endl;

    return 0;
}
