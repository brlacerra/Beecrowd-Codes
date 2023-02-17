#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, a, b, soma=0, x=0, y=0;
    cin >> n;

    while(x<n){
        cin >> a >> b;
        while(y<b){
            if(a%2!=0){
                soma+=a;
                y++;
            }
            a++;
        }
        cout << soma << endl;
        soma=0;
        y=0;
        x++;
    }

    return 0;
}