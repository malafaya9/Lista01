#include<iostream>
#include<math.h>

using namespace std;

double my_exp(double);

int fat(int);

int main()
{
    cout << "Insira um numero: ";
    int num;
    cin >> num;
    cout << "Valor da exponencial por my_exp: " << my_exp(num) << endl
         << "Valor da exponencial por    exp: " << exp(num);
    return 0;
}

double my_exp(double n){
    double p = 0, t = 1;
    int i = 0;
    do{
        t+=p;
        i++;
        p = (1.0*pow(n, i))/fat(i);
    }while(p>10e-6);

    return t;
}

int fat(int n){
    if(n==0){
            return 0;
    }
    int r = 1;
    for(int i = 1; i <= n; i++){
        r*=i;
    }
    return r;
}
