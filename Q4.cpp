#include<iostream>

using namespace std;

int mult(int,int);

int main()
{
    int n, m;
    cout << "Insira dois numeros:" << endl;
    cin >> m >> n;
    cout << "Resultado:" <<  mult(m,n) << endl;
    return 0;
}

int mult(int m, int n){
    int r;
    if(m>n){
        r = m;
        m = n;
        n = r;
    }
    r = 1;
    for(;m<=n;m++){
        r*=m;
    }
    return r;
}
