#include<bits/stdc++.h>

using namespace std;

int main(){

    float matriz[12][12], soma=0, colunaLimite=1, divisor=0;
    int linha=0, coluna=0;
    char escolha;

    cin >> escolha;

    for(linha=0; linha<12; linha++){
        for(coluna=0;coluna<12;coluna++){
            cin >> matriz[linha][coluna];
        }
    }
    cout.precision(1);
    cout.setf(ios::fixed);
    if(escolha=='S'){
        for(linha=0; linha<11; linha++){
            for(coluna=colunaLimite;coluna<12;coluna++){
                soma+=matriz[linha][coluna];
            }
            colunaLimite++;
        }
        cout << soma << endl;
    }
    if(escolha=='M'){
        for(linha=0; linha<11; linha++){
            for(coluna=colunaLimite;coluna<12;coluna++){
                soma+=matriz[linha][coluna];
                divisor++;
            }
            colunaLimite++;
        }
        cout << soma/divisor << endl;
    }
    return 0;
}