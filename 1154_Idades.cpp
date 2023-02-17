#include<bits/stdc++.h>

using namespace std;

int main(){

    int idade=0, soma=0, valor=0;
    
    cin >> idade;
    cout<<setprecision(2)<<fixed;
    while(idade>=0){
        soma+=idade;
        valor++;
        cin >> idade;
    }
    cout << 1.0*soma/valor << endl;

    return 0;
}