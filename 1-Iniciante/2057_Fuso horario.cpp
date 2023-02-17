#include<bits/stdc++.h>

using namespace std;

int main(){

    int hora=0, viagem=0, fuso=0;

    cin >> hora >> viagem >> fuso;

    while(viagem--){
        if(hora==24){
            hora=0;
            hora++;
        }
        else{
            hora++;
        }
    }
    if(fuso>0){
        while(fuso--){
            if(hora==0){
                hora=24;
                hora++;
            }
            else{
                hora++;
            }
        }
    }
    else if(fuso<0){
        while(fuso++){
            if(hora==0){
                hora=24;
                hora--;
            }
            else{
                hora--;
            }
        }
    }
    
    cout << hora << endl;


    return 0;
}