#include<bits/stdc++.h>

using namespace std;

int main(){

    float vetor[100]; 
    int i;

    for(i=0; i<100; i++){
        cin >> vetor[i];
    }

    cout.precision(1);
    cout.setf(ios::fixed);

    for(i=0; i<100; i++){
        if(vetor[i]<=10){
            cout << "A[" << i << "] = " << vetor[i] << endl;
        }
    }
    return 0;
}