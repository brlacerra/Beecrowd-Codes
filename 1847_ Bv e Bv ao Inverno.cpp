#include<bits/stdc++.h>

using namespace std;

int main(){

    int one, two, tre;

    cin >> one >> two >> tre;

    if(one==two && two==tre){
        cout << ":(" << endl;
    }
    if(two==one){
        if(two<tre){
            cout << ":)" << endl;
        }
        if(two>tre){
            cout << ":(" << endl;
        }
    }
    if(two<one){
        if(two<=tre){
            cout << ":)" << endl;
        }
        if(two>tre){
            if((one-two)>(two-tre)){
                cout << ":)" << endl;
            }
            if((one-two)<=(two-tre)){
                cout << ":(" << endl;
            }
        }
    }
    if(two>one){
        if(tre<=two){
            cout << ":(" << endl;
        }
        if(two<tre){
            if((two-one)>(tre-two)){
                cout << ":(" << endl;
            }
            if((two-one)<=(tre-two)){
                cout << ":)" << endl;
            }
        }
    }

    return 0;
}