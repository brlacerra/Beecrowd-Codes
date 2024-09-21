#include<bits/stdc++.h>

using namespace std;

int main(){
    int resultado[3], nums[3], pot=2;
    string corvo;

    for(int i=0;i<3;i++){
        cin >> corvo;
        for(int i=0;i<3;i++){
            if(corvo[i]=='-'){
                nums[i]=0;
            }
            else if(corvo[i]=='*'){
                nums[i]=1;
            }
        }
        for(int i=0;i<3;i++){
            resultado[i]+=nums[i]*pow(2,pot);
            pot--;
        }
        pot=2;
    }
    for(int i=0;i<3;i++){
        cout << resultado[i] << endl;
    }
    return 0;
}