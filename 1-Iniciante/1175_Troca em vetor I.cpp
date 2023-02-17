#include<bits/stdc++.h>

using namespace std;

int main(){

    int vetor[20], i=0, ii=0, aux=0;

    for(i=0; i<20; i++){
        cin >> vetor[i];
    }
    for(i=0, ii=19; i<10; i++, ii--){
        aux=vetor[i];
        vetor[i]=vetor[ii];
        vetor[ii]=aux;
    }
    for(i=0; i<20; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
    return 0;
}