#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string palavra="Ho";
    int limite;

    cin >> limite;

    while(limite--){
        if(limite>0){
             cout << palavra << " ";
        }
        else{
            cout << palavra;
        }
    }
    cout << "!" << endl;
    return 0;
}