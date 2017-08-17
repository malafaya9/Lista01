#include<iostream>

using namespace std;

bool primo(int);

void decompor_primo(int);

int main()
{
    int num;
    cout << "Insira um numero:";
    cin >> num;
    decompor_primo(num);
    return 0;
}

bool primo(int n){
    bool r = true;
    for(int i = 2; i < n; i++){
        r&=n%i!=0;
    }
    return r;
}

void decompor_primo(int n){
    int exp, n1;
    exp = 0;
    n1 = n;
    for(int i = 2; i <= n; i++){
        if(primo(i)){
            while(n1%i==0){
                exp++;
                n1/=i;
            }
            if(exp!=0){
                cout << "(" << i << "^" << exp << ")*";
                n1 = n;
                exp = 0;
            }
        }
    }
    cout << "1" << endl;
}
