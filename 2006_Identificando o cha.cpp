#include<bits/stdc++.h>

using namespace std;

int main(){

    int escolhaCha=0, cha=0, somaCha=0;

    cin >> escolhaCha;

    int loop=5;

    while(loop--){
        cin >> cha;
        if(escolhaCha==cha){
            somaCha++;
        }
    }
    cout << somaCha << endl;

    return 0;
}