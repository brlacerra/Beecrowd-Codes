#include<bits/stdc++.h>

using namespace std;

int main(){

    int escolha;

    cin>> escolha;

    while(escolha>0){

        int matriz[escolha][escolha], valor=escolha;
        int linhaMatriz=0, linha=0, coluna=0, supColuna=1, inicioColuna=0, supMatriz=escolha-1;

        for(linhaMatriz=escolha-1;linhaMatriz>=0;linhaMatriz--){
            for(linha=supMatriz, coluna=inicioColuna; linha<escolha, coluna<supColuna ;linha++, coluna++){
                matriz[linha][coluna]=valor;
            }
            supColuna++;
            supMatriz--;
            valor--;
        }
        int limiteCima=escolha-1;
        int supLinha=limiteCima;
        valor=2;
        supColuna=1;
        for(linhaMatriz=0; linhaMatriz<limiteCima; linhaMatriz++){
            for(linha=0, coluna=supColuna; linha<supLinha, coluna<escolha; linha++, coluna++){
                matriz[linha][coluna]=valor;
            }
            supColuna++;
            valor++;
            supLinha--;
        }
 
        for(linha=0; linha<escolha; linha++){
            for(coluna=0; coluna<escolha; coluna++){
                if (coluna==0)printf ("%3d", matriz[linha][coluna]);
                else printf (" %3d", matriz[linha][coluna]);
            }
            cout << endl;
        }
        cout << endl;
        cin >> escolha;
    }
    return 0;
}