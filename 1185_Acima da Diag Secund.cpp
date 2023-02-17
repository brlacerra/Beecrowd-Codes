#include<bits/stdc++.h>

using namespace std;

int main(){

    float matriz[12][12], soma=0;
    int divisor=0, linha, coluna, limiteColuna=11;
    char escolha;

    cin >> escolha;

    for(linha=0;linha<12;linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }

    for(linha=0;linha<11;linha++){
        for(coluna=0;coluna<limiteColuna;coluna++){
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