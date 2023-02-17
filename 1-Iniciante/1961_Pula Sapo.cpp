#include<bits/stdc++.h>

using namespace std;

int main(){

    int pulo=0, qtdcanos=0, final=0;

    cin >> pulo >> qtdcanos;

    int acao[qtdcanos];

    for(int i=0; i<qtdcanos; i++){
        cin >> acao[i];
    }
    for(int i=0; i<qtdcanos-1; i++){
            if(acao[i]>acao[i+1]){
                if(acao[i]-acao[i+1]>pulo){
                    final++;
                }
            }else{
                if(acao[i+1]-acao[i]>pulo){
                    final++;
                }
            }
    }
    if(final>0){
        cout << "GAME OVER" << endl;
    }
    else{
        cout << "YOU WIN" << endl;
    }

    return 0;
}