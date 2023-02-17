#include<bits/stdc++.h>

using namespace std;

int main(){

    int quantidade;
    cin >> quantidade;

    while(quantidade>0){
        int r1=0, r2=0;
        cin >> r1 >> r2;
        cout << r1+r2 << endl;
        quantidade--;
    }
    return 0;
}