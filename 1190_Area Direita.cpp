#include<bits/stdc++.h>

using namespace std;

int main(){

    double matriz[12][12], soma;
    int linha, coluna, divisor=0, colunaInicial=11;
    char escolha;

    cin>> escolha;

    for(linha=0;linha<12;linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    for(linha=1;linha<11;linha++){
        for(coluna=colunaInicial;coluna<12;coluna++){
            soma+=matriz[linha][coluna];
            divisor++;
        }
        if(linha==5){
        }else if(linha>5){
            colunaInicial++;
        }
        else{
            colunaInicial--;
        }
    }
    cout.precision(1);
        cout.setf(ios::fixed);
        if(escolha=='M'){
            cout << soma/divisor << endl;
        }
        if(escolha=='S'){
            cout << soma << endl;
        }
    return 0;
}