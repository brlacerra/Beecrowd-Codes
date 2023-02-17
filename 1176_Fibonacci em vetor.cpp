#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int fibonacci[61],i=2,escolha,limite,ii;

    fibonacci[0]=0;
    fibonacci[1]=1;

    for(i=2;i<61;i++){
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    
    cin >> limite;

    for(ii=0;ii<limite;ii++){
        cin >> escolha;

        cout << "Fib(" << escolha << ") = " << fibonacci[escolha] << endl;
    }
    return 0;
}