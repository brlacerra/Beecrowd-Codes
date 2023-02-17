#include<bits/stdc++.h>

using namespace std;

int main(){

    string nome;
    int forca, limite;

    cin >> limite;

    while(limite--){
        cin >> nome >> forca;

        if(nome.compare("Thor")==0){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }

    return 0;

}