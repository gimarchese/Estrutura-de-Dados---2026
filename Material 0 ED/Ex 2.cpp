#include <iostream>
using namespace std;

int main()
{
    int iddNadador;

    cout << "Entre com a idade do nadador: ";
    cin >> iddNadador;
    cout << endl << "Categoria: ";

    if (iddNadador > 4 && iddNadador <= 7){
        cout << "Infantil A" << endl;
    }

    else if (iddNadador > 7 && iddNadador <= 10){
        cout << "Infantil B" << endl;
    }

    else if (iddNadador > 10 && iddNadador <= 13){
        cout << "Juvenil A" << endl;
    }

    else if (iddNadador > 13 && iddNadador <=17){
        cout << "Juvenil B" << endl;
    }

    else if (iddNadador > 17){
        cout << "Senior" << endl;
    }

    else{
        cout << "Invalida" << endl;
    }
}
