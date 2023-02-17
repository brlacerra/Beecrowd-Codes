#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int notas=2, code=0, preco=0;

    cin >> code >> preco;
    while(code>0 || preco>0){
            preco-=code;
            if(preco>0){
                while(notas--){
                if(preco>=100){
                    preco-=100;
                }
                if(preco>=50){
                    preco-=50;
                }
                if(preco>=20){
                    preco-=20;
                }
                if(preco>=10){
                    preco-=10;
                }
                if(preco>=5){
                    preco-=5;
                }
                if(preco>=2){
                    preco-=2;
                }
            }
            }
            if(preco==0 && notas<=1){
                cout << "possible" << endl;
            }
            else{
                cout << "impossible" << endl;
            }
            cin >> code >> preco;
            notas=2;
    }
    return 0;
}