#include<bits/stdc++.h>

using namespace std;

int main(){

    float matriz[12][12], soma;
    int linha, coluna, limitelinha=1, divisor=0;
    char escolha;

    cin >> escolha;

    for(linha=0;linha<12;linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    for(coluna=0;coluna<11;coluna++){
        for(linha=limitelinha;linha<12;linha++){
            soma+=matriz[linha][coluna];
            divisor++;
        }
        limitelinha++;
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