#include<bits/stdc++.h>

using namespace std;

int main(){

    double matriz[12][12], soma;
    int linha, coluna, divisor=0, inicioColuna=1, limiteColuna=11;
    char escolha;

    cin >> escolha;

    for(linha=0;linha<12;linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    for(linha=0;linha<5;linha++){
        for(coluna=inicioColuna;coluna<limiteColuna;coluna++){
            soma+=matriz[linha][coluna];
            divisor++;
        }
        inicioColuna++;
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