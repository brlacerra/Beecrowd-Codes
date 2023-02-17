#include<bits/stdc++.h>

using namespace std;

int main(){

    float matriz[12][12], soma;
    int linha, coluna, divisor=0, limiteColuna=10;
    char escolha;

    cin >> escolha;

    for(linha=0; linha<12; linha++){
        for(coluna=0;coluna<12; coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    for(linha=1;linha<12;linha++){
        for(coluna=11;coluna>limiteColuna;coluna--){
            soma+=matriz[linha][coluna];
            divisor++;
        }
        limiteColuna--;
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