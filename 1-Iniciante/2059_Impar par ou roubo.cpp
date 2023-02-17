#include<bits/stdc++.h>

using namespace std;

int main(){

    int p=0, j1=0, j2=0, r=0, a=0;

    cin >> p >> j1 >> j2 >> r >> a;

    if(r==1){
        if(a==1){
            cout << "Jogador 2 ganha!" << endl;
        }
        else{
            cout << "Jogador 1 ganha!" << endl;
        }
    }
    else if(r==0){
        if(a==1){
            cout << "Jogador 1 ganha!" << endl;
        }
        else{
            if(p==1 && (j1+j2)%2==0){
                cout << "Jogador 1 ganha!" << endl;
            }
            else if(p==1 && (j1+j2)%2!=0){
                cout << "Jogador 2 ganha!" << endl;
            }
            else if(p==0 && (j1+j2)%2!=0){
                cout << "Jogador 1 ganha!" << endl;
            }
            else{
                cout << "Jogador 2 ganha!" << endl;
            }
        }
    }

    return 0;
}