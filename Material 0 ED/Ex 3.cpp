#include <iostream>

using namespace std;

int main()
{
    float horasTrabalhadas, sMinimo, sBruto, sLiquido;

    cout << "Entre com o numero de horas trabalhadas no mes: ";
    cin >> horasTrabalhadas;

    sMinimo = 1804; // Salario minino em SP
    sBruto = (sMinimo / 2) * horasTrabalhadas;
    sLiquido = sBruto - (sBruto * 0.03);

    cout << endl << "Salario a receber: " << sLiquido << endl;
}
