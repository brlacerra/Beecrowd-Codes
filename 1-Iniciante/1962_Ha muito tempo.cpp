#include<bits/stdc++.h>

using namespace std;

int main(){

    int lim=0;

    cin >> lim;

    while(lim--){
       int ano=0, quando;

       cin >> ano;

       quando=2014-ano;

        if(quando<0){
            cout << quando*-1 << " A.C." << endl;
        }
        else{
            cout << quando+1 << " D.C." << endl;
        }
    }
    return 0;
}