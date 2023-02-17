#include<bits/stdc++.h>

using namespace std;

int main(){

    long long int num;
    int qtd=0;

    cin >> num;
    string nome=to_string(num);

    while(nome[qtd]!='\0'){
        qtd++;
    }
    while(qtd--){
        cout << nome[qtd];
    }
    cout << endl;
    
    return 0;
}