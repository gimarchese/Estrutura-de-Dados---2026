#include <iostream>
using namespace std;

struct fichaPaciente{

    string nome;
    string sintoma;
    int idd;

};

int main()
{
    fichaPaciente fichapaciente;

    char continua;

    do
    {
    cout << "Infome o nome do paciente: ";
    getline(cin, fichapaciente.nome);
    cout << "Informe o sintoma do paciente: ";
    getline(cin, fichapaciente.sintoma);
    cout << "Informe a idade: ";
    cin >> fichapaciente.idd;

    cout << endl << "Entre com 'S' para cadastrar outro paciente: ";
    cin >> continua;
    cout << endl;
    cin.ignore();
    } while(continua == 'S' || continua == 's');


}
