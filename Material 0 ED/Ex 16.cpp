#include <iostream>
using namespace std;

int main()
{
    int num, soma = 0;

    cout << "Entre com um numero qualquer para somar(Use um numero negativo para parar): ";
    do
    {
        cin >> num;
        soma = soma + num;

    }while(num > 0);

    cout << "Soma: " << soma << endl;
}
