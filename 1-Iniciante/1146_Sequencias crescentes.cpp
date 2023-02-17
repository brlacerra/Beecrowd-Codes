#include<bits/stdc++.h>

using namespace std;

int main(){
    
    int x=1, i=0;

    while(x!=0){
        cin >> x;
        int lim=x;
        while(i<lim){
            i++;
            if(i==lim){
                cout << i << endl;
            }
            else{
                cout << i << " ";
            }
        }
        i=0;
        lim=0;
    }

    return 0;
}