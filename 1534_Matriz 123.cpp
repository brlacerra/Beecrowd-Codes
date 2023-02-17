#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while(cin >> n){
        
        int matriz[n][n];
        int linha, coluna;

        for(linha=0; linha<n; linha++){
            for(coluna=0; coluna<n; coluna++){
                matriz[linha][coluna]=3;
            }
        }
        for(linha=0, coluna=0; linha<n, coluna<n; linha++, coluna++){
            matriz[linha][coluna]= 1;
        }
        for(linha=n-1, coluna=0; linha>=0, coluna<n; linha--, coluna++){
            matriz[linha][coluna]=2;
        }
        for(linha=0; linha<n; linha++){
            for(coluna=0; coluna<n; coluna++){
                cout << matriz[linha][coluna];
            }cout << endl;
        }
        
    }

    return 0;
}