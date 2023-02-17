#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<double> sequencia;

    for(int i=0; i<100; i++){
        double num;
        cin >> num;
        sequencia.push_back(num);
    }
    for(int i=0; i<100; i++){
        if(sequencia[i]<=10){
            printf("A[%d] = %.1lf\n",i,sequencia[i]);
        }
    }

    return 0;
}