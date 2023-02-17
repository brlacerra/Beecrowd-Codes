#include<bits/stdc++.h>

using namespace std;

int main(){

    int vetor[10], i=0;

    for(i=0; i<10; i++){
        cin >> vetor[i];
    }
    for(i=0; i<10; i++){
        if(vetor[i]<=0){
            cout << "X[" << i << "] = " << 1 << endl;
        }else{
            cout << "X[" << i << "] = " << vetor[i] << endl;
        }
    }
    return 0;
}