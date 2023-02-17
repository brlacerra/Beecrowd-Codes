#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int qtdFazendas=0;

    cin >> qtdFazendas;
    long long int vetorFazendas[qtdFazendas];
    long long int fazendasVisitadas=0, somatotal=0;

    for(int i=0; i<qtdFazendas; i++){
        cin >> vetorFazendas[i];
        somatotal+=vetorFazendas[i];
    }
    long long int i=0;
    while(i>=0 && i<qtdFazendas){
        if(i>fazendasVisitadas){
            fazendasVisitadas=i;
        }
        if(vetorFazendas[i]%2!=0){
            if(vetorFazendas[i]>0){
                vetorFazendas[i]--;
                somatotal--;
            }
            i++;
        }
        else{
            if(vetorFazendas[i]>0){
                vetorFazendas[i]--;
                somatotal--;
            }
            i--;
        }
    }
    if(somatotal<0){
        cout << fazendasVisitadas+1 << " " << 0 << endl;
    }
    else{
        cout << fazendasVisitadas+1 << " " << somatotal << endl;
    }
    

    return 0;
}