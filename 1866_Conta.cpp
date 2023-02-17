#include<bits/stdc++.h>

using namespace std;

int main(){

    int S=0, escolha=0, num=0, aux=0;

    cin >> num;

    while(num--){
        cin >> escolha;
        for(int i=0; i<=escolha; i++){
            S=aux;
            if(i%2==0){
                aux=1;
            }
            else{
                aux=0;
        }
    }
    cout << S << endl;
    }

    return 0;
}