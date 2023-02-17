#include<bits/stdc++.h>

using namespace std;

int main(){

    int n=0, multiply=0;
    cin >> n;
    int i=n;
    multiply=n;
    while(i>0){
        if(n>1){
            multiply*=(n-1);
            n--;
        }
        i--;
    }
    cout << multiply << endl;

    return 0;
}
