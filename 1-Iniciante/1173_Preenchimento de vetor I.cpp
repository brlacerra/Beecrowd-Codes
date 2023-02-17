#include<bits/stdc++.h>

using namespace std;

int main(){
    int vetor[10],aux=0, i=0;

    cin >> aux;
    while(i<10){
        vetor[i]=aux;
        aux*=2;
        i++;
    }
    i=0;
    while(i<10){
        cout << "N[" << i << "] = " << vetor[i] << endl;
        i++;
    }
    return 0;
}