#include<bits/stdc++.h>

using namespace std;

int main(){

    int qtdInicial=0, acao=0;
    string escolha;

    cin >> qtdInicial >> acao;

    while(acao--){
        cin >> escolha;
        if(escolha=="fechou"){
            qtdInicial++;
        }
        else{
            qtdInicial--;
        }
    }
    cout << qtdInicial << endl;

    return 0;
}