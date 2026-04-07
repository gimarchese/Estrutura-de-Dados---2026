#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Entre com um numero para calcular sua tabuada: ";
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num << " * " << i << " = " << num * i << endl;
    }
}
