#include<bits/stdc++.h>

using namespace std;

int main(){

    int limite, menor=0, posicao=0;

    cin >> limite;

    int vetor[limite];

    for(int i=0; i<limite; i++){
        cin >> vetor[i];
    }
    for(int i=0; i<limite; i++){
        if(i==0){
            menor=vetor[i];
            posicao=i;
        }
        else{
            if(vetor[i]<menor){
                menor=vetor[i];
                posicao=i;
            }
        }
    }

    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}