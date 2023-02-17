#include<bits/stdc++.h>

using namespace std;

int main(){

    int hora=0, min=0, qtdMin=0, limMin=0;
    while(scanf("%d:%d",&hora,&min)!=EOF){

        qtdMin=(((hora*60)+min)+60);
        limMin=8*60;

        if((qtdMin-limMin)>0){
            cout << "Atraso maximo: " << qtdMin-limMin << endl;
        }
        else{
            cout << "Atraso maximo: 0" << endl;
        }
    }
    return 0;
}