#include<bits/stdc++.h>

using namespace std;

int main(){

    int repeticao;
    while(cin >> repeticao){
        int lesma=0, maior=0;
        while(repeticao--){
            cin >> lesma;
            if(lesma>maior){
                maior=lesma;
            }
        }
        if(maior<10){
            cout << 1 << endl;
            }
        else if(maior>=10 && maior<20){
            cout << 2 << endl;
            }
        else if(maior>=20){
            cout << 3 << endl;
            }
        }
    return 0;
}
