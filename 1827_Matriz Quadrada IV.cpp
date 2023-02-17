#include<bits/stdc++.h>

using namespace std;

int main(){

    int tamanho;
    while(cin >> tamanho){
        int matriz[tamanho][tamanho];
        int linha,coluna;

        for(linha=0; linha<tamanho; linha++){
            for(coluna=0; coluna<tamanho; coluna++){
                matriz[linha][coluna]=0;
            }
        }
        for(linha=0, coluna=0; linha<tamanho, coluna<tamanho; linha++,coluna++){
            matriz[linha][coluna]=2;
        }
        for(linha=tamanho-1, coluna=0; linha>0, coluna<tamanho; linha--, coluna++){
            matriz[linha][coluna]=3;
        }
        int centroL=tamanho/3, centroC=tamanho/3;
        for(linha=centroL; linha<tamanho-centroL; linha++){
            for(coluna=centroC; coluna<tamanho-centroC; coluna++){
                matriz[linha][coluna]=1;
            }
        }
        matriz[tamanho/2][tamanho/2]=4;


        for(linha=0; linha<tamanho; linha++){
            for(coluna=0; coluna<tamanho; coluna++){
                cout << matriz[linha][coluna];
            }cout << endl;
        }cout << endl;
    }
    return 0;
}