#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){

    while(1){
        int a=0, b=0, c=0, total=0;
        cin >> a >> b >> c;
        if(a==0){
            break;
        }
        total=sqrt(a*b*100/c);
        cout << total << endl;
    }
    return 0;
}