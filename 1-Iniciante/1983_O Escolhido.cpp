#include<bits/stdc++.h>

using namespace std;

int main(){
    
    long long int matricula=0, qtdmatricula=0, savematricula=0;
    double nota=0, maiornota=0;

    cin >> qtdmatricula;

    while(qtdmatricula--){
        cin >> matricula >> nota;
        if(nota>maiornota){
            maiornota=nota;
            savematricula=matricula;
        }
    }
    if(maiornota<8){
        cout << "Minimum note not reached" << endl;
    }
    else{
        cout << savematricula << endl;
    }

    return 0;
}