#include<bits/stdc++.h>

using namespace std;

int main(){

    int qtd, maior=21, valor, posicao=1, contador=1;

    cin >> qtd;

    while(contador<=qtd){

        cin >> valor;

        if(valor<maior){
            maior=valor;
            posicao=contador;
        }
        
        contador++;
    }

    cout << posicao << endl;

    return 0;
}