#include<bits/stdc++.h>

using namespace std;

int main(){

    int x, z, i=0, soma=0;

    cin >> x >> z;

    while(z<=x){
        cin >> z;
    }
    for(int a=x;soma<z;a++){
        i++;
        soma+=a;
    }
    cout << i << endl;
    
    return 0;
}