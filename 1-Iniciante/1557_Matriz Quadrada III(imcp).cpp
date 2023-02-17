#include<bits/stdc++.h>

using namespace std;

int main(){

    while(1){
        
        int tamanho;
        cin >> tamanho;
        if(tamanho==0){
            break;
        }
        int matriz[tamanho][tamanho];
        int linha, coluna;
        int num=1, aux=2;

        for(linha=0;linha<tamanho;linha++){
            for(coluna=0; coluna<tamanho; coluna++){
                if(linha==0 && coluna==0){
                    num=1;
                    matriz[linha][coluna]=1;
                }
                else{
                    num*=2;
                    matriz[linha][coluna]=num;
                }
            }
            num=aux;
            aux*=2;
            num/=2;
        }
        for(linha=0;linha<tamanho;linha++){
            for(coluna=0; coluna<tamanho; coluna++){
                cout << matriz[linha][coluna] << " ";
            }cout << endl;
        }
    }
    return 0;
}