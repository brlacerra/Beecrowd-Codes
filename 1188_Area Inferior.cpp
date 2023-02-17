#include<bits/stdc++.h>

using namespace std;

int main(){

    double matriz[12][12], soma;
    int linha, coluna, divisor=0, inicioColuna=5, finalColuna=7;
    char escolha;

    cin >> escolha;

    for(linha=0; linha<12; linha++){
        for(coluna=0; coluna<12; coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    for(linha=7;linha<12;linha++){
        for(coluna=inicioColuna;coluna<finalColuna;coluna++){
            soma+=matriz[linha][coluna];
            divisor++;
        }
        inicioColuna--;
        finalColuna++;
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