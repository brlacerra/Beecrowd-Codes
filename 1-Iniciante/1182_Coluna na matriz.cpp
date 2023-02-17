#include<bits/stdc++.h>

using namespace std;

int main(){

    int linha, coluna, colunaOperacao;
    float matriz[12][12], soma=0;
    char escolha;

    cin >> colunaOperacao;
    cin >> escolha;

    for(linha=0; linha<12;linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }

    cout.precision(1);
    cout.setf(ios::fixed);
    if(escolha == 'M'){
        for(coluna=colunaOperacao, linha=0; linha<12; linha++){
            soma+=matriz[linha][coluna];
        }
        cout << soma/12 << endl;
    }
    if(escolha == 'S'){
        for(coluna=colunaOperacao, linha=0; linha<12; linha++){
            soma+=matriz[linha][coluna];
        }
        cout << soma << endl;
    }
    return 0;
}