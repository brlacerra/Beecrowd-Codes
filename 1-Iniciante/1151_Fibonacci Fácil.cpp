#include<bits/stdc++.h>

using namespace std;

int main(){

    int num, i;
    long long int aux, n1=0, n2=1;
    cin >> num;
    cout << "0" << " ";
    while(i<num-1){
        i++;
        if(i==num-1){
            cout << n2 << endl;
        }
        else{
            cout << n2 << " ";
        }
        aux=n2;
        n2+=n1;
        n1=aux;
    }

    return 0;
}