#include<bits/stdc++.h>

using namespace std;

int main(){

    int limite=5, num=0, soma=0, i=0;

    cin >> num;

    while(num!=0){
        while(i<limite){
        if(num%2==0){
            soma+=num;
            i++;
        }
        num++;
        }
        cout << soma << endl;
        soma=0;
        i=0;
        cin >> num;
    }

    return 0;
}