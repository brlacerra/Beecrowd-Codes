#include<bits/stdc++.h>

using namespace std;

int main(){
    double s=0, aux=3, i=1;

    while(aux<40){
        s+=aux/i;
        aux++;
        i*=2;
    } 
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << s << endl;

    return 0;
}