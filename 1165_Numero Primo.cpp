#include<bits/stdc++.h>

using namespace std;

int main(){

    int limite=0, num=0, aux=1, divisor=0;
    cin >> limite;

    while(limite>0){
        cin >> num;
        while(aux<=num){
            if(num%aux==0){
                divisor++;
            }
            aux++;
        }
        if(divisor==2){
            cout << num << " eh primo" << endl;
        }
        else{
            cout << num << " nao eh primo" << endl;
        }
        num=0; aux=1; divisor=0;
        limite--;
    }
    return 0;
}