#include<iostream>
using namespace std;

int main(){
    unsigned long n1 = 1;
    unsigned long n2 = 0;
    unsigned long aux = 0;
    int n;
    cout << "Insira o numero de termos a serem exibidos: ";
    cin >> n;
    while(n>0){
        cout << n1 << " ";
        aux = n1 + n2;
        n2 = n1;
        n1 = aux;
        n--;
    }
    return 0;
}
