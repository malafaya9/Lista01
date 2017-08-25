#include<iostream>
using namespace std;

int fibonacci(int n){
    int n1 = 1;
    int n2 = 0;
    int aux = 0;
    while(n>0){
        aux = n1 + n2;
        n2 = n1;
        n1 = aux;
        n--;
    }
    return n2;
}

int main(){
    int n;
    cout << "Insira o numero do termo a ser exibido: ";
    cin >> n;
    cout << fibonacci(n);
    return 0;
}
