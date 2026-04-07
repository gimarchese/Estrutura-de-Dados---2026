#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "Entre com um numero para verificar se e par ou impar: ";
   cin >> num;
   cout << endl;

   if(num % 2 ==0){
    cout << "O numero " << num << " e par" << endl;
   }

   else{
    cout << "O numero " << num << " e impar" << endl;
   }
}
