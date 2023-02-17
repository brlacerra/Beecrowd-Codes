#include<bits/stdc++.h>

using namespace std;

int main(){

    int i, vetorPar[5], vetorImpar[5], posicaoPar=0, posicaoImpar=0, valor;

    for(i=0;i<15;i++){
        cin >> valor;
        if(valor%2==0){
            vetorPar[posicaoPar]=valor;
            posicaoPar++;
            if(posicaoPar==5){
                for(posicaoPar=0;posicaoPar<5;posicaoPar++){
                    cout << "par[" << posicaoPar << "] = " << vetorPar[posicaoPar] << endl;
                }
                posicaoPar=0;
            }
        }
        else{
            vetorImpar[posicaoImpar]=valor;
            posicaoImpar++;
            if(posicaoImpar==5){
                for(posicaoImpar=0;posicaoImpar<5;posicaoImpar++){
                    cout << "impar[" << posicaoImpar << "] = " << vetorImpar[posicaoImpar] << endl;
                }
                posicaoImpar=0;
            }
        }
    }
    for(int iimpar=0; iimpar<posicaoImpar; iimpar++){
        cout << "impar[" << iimpar << "] = " << vetorImpar[iimpar] << endl;
    }
    for(int ipar=0; ipar<posicaoPar; ipar++){
        cout << "par[" << ipar << "] = " << vetorPar[ipar] << endl;
    }
    return 0;
}