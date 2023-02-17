#include<bits/stdc++.h>

using namespace std;

int main(){

    int qtd=0;

    double code=0;
    double qtdcode=0, soma=0;

    cin >> qtd;

    while(qtd--){
        cin >> code >> qtdcode;

        if(code==1001){
            soma+=1.50*qtdcode;
        }
        if(code==1002){
            soma+=2.50*qtdcode;
        }
        if(code==1003){
            soma+=3.50*qtdcode;
        }
        if(code==1004){
            soma+=4.50*qtdcode;
        }
        if(code==1005){
            soma+=5.50*qtdcode;
        }
    }
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << soma << endl;

    return 0;
}