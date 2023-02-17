#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> sequencia;
    
    for(int i=0; i<10; i++){
        int num;
        cin >> num;
        if(num<=0){
            sequencia.push_back(1);
        }
        else{
            sequencia.push_back(num);
        }
    }
    for(int i=0; i<10; i++){
        printf("X[%d] = %d\n",i,sequencia[i]);
    }

    return 0;
}