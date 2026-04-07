#include <iostream>
using namespace std;

int main()
{
   float nota

   cout << "Entre com uma nota: ";
   cin >> nota;

   if(nota >= 6){
    cout << "Aluno aprovado com nota " << nota << endl;
   }

   else if(nota >=4 && nota < 6){
    cout << "Aluno de recuperacao com nota " << nota << endl;
   }
   else if(nota < 4){
    cout << "Aluno reprovado com nota " << nota << endl;
   }
}
