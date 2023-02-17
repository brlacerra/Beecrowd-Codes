#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> sequencia;

    int num=0;
    cin >> num;
    int multi=num;

    for(int i=0; i<10; i++){
        if(i==0){
            sequencia.push_back(num);
        }
        else{
            multi*=2;
            sequencia.push_back(multi);
        }
        printf("N[%d] = %d\n",i, sequencia[i]);
    }

    return 0;
}