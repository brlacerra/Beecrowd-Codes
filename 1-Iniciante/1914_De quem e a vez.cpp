#include<bits/stdc++.h>

using namespace std;

int main(){

    int limite;
    string nome1, escolha1, nome2, escolha2;
    int n1, n2;
    cin >> limite;

    while(limite--){
        cin >> nome1 >> escolha1 >> nome2 >> escolha2;
        cin >> n1 >> n2;

        if((n1+n2)%2==0){
            if(escolha1.compare("PAR")==0){
                cout << nome1 << endl;
            }
            else{
                cout << nome2 << endl;
            }
        }
        else{
            if(escolha1.compare("IMPAR")==0){
                cout << nome1 << endl;
            }
            else{
                cout << nome2 << endl;
            }
        }
    }

    return 0;
}