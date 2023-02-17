#include<bits/stdc++.h>

using namespace std;

int main(){

     long long int tamanho=0;
    cin >> tamanho;

    while(tamanho>0){
        long long int matriz[tamanho][tamanho];
        int linha=0, coluna=0, lci=0, lcf=0, lcm=0, valor=0;
        
        lcm=tamanho/2;
        if(tamanho%2!=0){
            lcm++;
        }
        lcf=tamanho;
            for(valor=1;valor<=lcm;valor++){
                for(linha=lci;linha<lcf;linha++){
                    for(coluna=lci;coluna<lcf;coluna++){
                        matriz[linha][coluna]=valor;
                    }
                }
                lci++;
                lcf--;
            }
            for(linha=0; linha<tamanho; linha++){
            for(coluna=0; coluna<tamanho; coluna++){
                if(coluna==0){
                    cout << "    " << matriz[linha][coluna] << "     " ;
                }
                else if(coluna==(tamanho-1)){
                    cout << matriz[linha][coluna];
                }
                else{
                    cout << matriz[linha][coluna] << "     ";
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> tamanho;
    }
    return 0;
}