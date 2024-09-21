#include<bits/stdc++.h>

using namespace std;

int main(){
    int cawcaw=0;
    char palavra[8];
    int sTotal=0;
    do{
        int soma=0, num=0;
        fflush(stdin);
        cin.getline(palavra, 8);
        if(strcmp(palavra, "caw caw")==0){
            cout << sTotal << endl;
            cawcaw++;
            sTotal=0;
        }
        else {
            for (int i = 0; i < 3; i++) {
                if (palavra[i] == '*') {
                    num += pow(2, 2 - i);
                }
            }
            soma += num;
            sTotal+=soma;
        }
    }while(cawcaw!=3);
    return 0;
}