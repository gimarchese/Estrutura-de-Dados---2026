#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Entre com um numero de 1 a 10(Use um de outro range para parar): ";
    do
    {
        cin >> num;

    }while(num >= 1 && num <= 10);
}
