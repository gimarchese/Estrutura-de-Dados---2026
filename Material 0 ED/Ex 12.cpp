#include <iostream>
using namespace std;

int main()
{
   int num1, num2, num3;

   cout << "Entre com um numero qualquer: ";
   cin >> num1;
   cout << "Entre com um numero qualquer: ";
   cin >> num2;
   cout << "Entre com um numero qualquer: ";
   cin >> num3;
   cout << endl;

   if(num1 > num2 && num1 > num3){
    cout << "O numero " << num1 << " e o maior" << endl;
   }

   else if(num2 > num1 && num2 > num3){
    cout <<  "O numero " << num2 << " e o maior" << endl;
   }
   else if(num3 > num1 && num3 > num2){
    cout <<  "O numero " << num3 << " e o maior" << endl;
   }
   else{
    cout <<  "Os 3 numeros iguais" << endl;
   }
}
