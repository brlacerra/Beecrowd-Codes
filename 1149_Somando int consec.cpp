#include<bits/stdc++.h>

using namespace std;

int main(){

        int A=0, N=0, soma=0, i=0;
        cin >> A >> N;
        while(N<=0){
            cin >> N;
        }
        for(i=1;i<=N;i++){
            soma+=A;
            A++;
        }

        cout << soma << endl;
        return 0;
}