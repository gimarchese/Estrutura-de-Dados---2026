#include <iostream>
using namespace std;

int quadrado(int n);

int main(){
    for(int i = 1; i <= 20; i++){
        cout << quadrado(i) << endl;
    }
}

int quadrado(int n){
    return n*n;
}
