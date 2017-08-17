#include<iostream>

using namespace std;

bool primo(int);

int main()
{
    int num;
    cout << "Insira um numero:";
    cin >> num;
    if(primo(num)){
        cout << "Eh Primo!" << endl;
    }else{
        cout << "N Eh Primo!" << endl;
    }
    return 0;
}

bool primo(int n){
    bool r = true;
    for(int i = 2; i < n; i++){
        r&=n%i!=0;
    }
    return r;
}
