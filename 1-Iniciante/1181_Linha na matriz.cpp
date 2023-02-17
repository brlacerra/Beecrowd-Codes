#include<bits/stdc++.h>

using namespace std;

int main(){

    int linha, coluna, linhaOperacao;
    float matriz[12][12], soma=0;
    char escolha;

    cin >> linhaOperacao;
    cin >> escolha;

    for(linha=0; linha<12;linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }

    cout.precision(1);
    cout.setf(ios::fixed);
    if(escolha == 'M'){
        for(linha=linhaOperacao, coluna=0; coluna<12; coluna++){
            soma+=matriz[linha][coluna];
        }
        cout << soma/12 << endl;
    }
    if(escolha == 'S'){
        for(linha=linhaOperacao, coluna=0; coluna<12; coluna++){
            soma+=matriz[linha][coluna];
        }
        cout << soma << endl;
    }
    return 0;
}