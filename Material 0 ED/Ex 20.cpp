#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Digite um numero inteiro positivo: ";
    cin >> num;

    if(num >= 0){
        for (int i = num; i >= 0; i--) {
            cout << i << endl;
        }
    } else {
        cout << "Numero invalido! Deve ser positivo." << endl;
    }

    return 0;
}
