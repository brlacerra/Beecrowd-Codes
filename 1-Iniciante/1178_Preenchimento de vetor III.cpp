#include<bits/stdc++.h>

using namespace std;

int main(){

    double vetor[100], valor;
    int i;

    cin >> valor;
    for(i=0;i<100;i++){
        vetor[i]=valor;
        valor/=2;
    }
    for(i=0;i<100;i++){
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }

    return 0;
}