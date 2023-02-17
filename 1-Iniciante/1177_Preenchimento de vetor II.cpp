#include<bits/stdc++.h>

using namespace std;

int main(){

    int vetor[1000], i=0, fator=0, limiteFator=0;

    cin >> fator;

    for(i=0;i<1000;i++){
        vetor[i]=limiteFator;
        if(limiteFator==(fator-1)){
            limiteFator=0;
        }
        else{
            limiteFator++;
        }
    }
    for(i=0;i<1000;i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }


    return 0;
}