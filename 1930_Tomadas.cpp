#include<bits/stdc++.h>

using namespace std;

int main(){

    int filtros[4], soma=0;

    for(int i=0; i<4; i++){
        cin >> filtros[i];
        if(i!=3){
            filtros[i]--;
        }
        soma+=filtros[i];
    }
    cout << soma << endl;

    return 0;
}