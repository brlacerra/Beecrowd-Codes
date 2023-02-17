#include<bits/stdc++.h>

using namespace std;

int main(){

    int escolha=0, caso=1;

    while(cin >> escolha){
        int qtdnum=0, num=0, numaux=0;
        long long int vetor[99999];
        int posicao=0;

        escolha++;
        while(escolha--){
            if(num==0){
                vetor[qtdnum]=num;
                num++;
                qtdnum++;
            }
            else{
                numaux=num;
                while(numaux--){
                    vetor[qtdnum]=num;
                    qtdnum++;
                }
                num++;
            }
        }
        if(qtdnum==1){
            cout << "Caso " << caso << ": " << qtdnum << " numero" << endl;
        }
        else{
            cout << "Caso " << caso << ": " << qtdnum << " numeros" << endl;

        }
        for(int i=0; i<qtdnum; i++){
            if(i==qtdnum-1){
            cout << vetor[i] << endl;

            }
            else{
            cout << vetor[i] << " ";

            }
        }cout << endl;
        caso++;
    }

    return 0;
}