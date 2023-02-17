#include<bits/stdc++.h>

using namespace std;

int main(){

    int limite=0, num=0, aux=1, soma=0;

    cin >> limite;

    while (limite>0)
    {
        cin >> num;
        while(aux<num){
            if(num%aux==0){
                soma+=aux;
            }
            aux++;
        }
        if(soma==num){
            cout << num << " eh perfeito" << endl;
        }
        else{
            cout << num << " nao eh perfeito" << endl;
        }
        soma=0; num=0; aux=1;
        limite--;
    }
    return 0;
}