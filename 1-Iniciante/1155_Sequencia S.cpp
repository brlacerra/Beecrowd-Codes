#include<bits/stdc++.h>

using namespace std;

int main(){
    float n=1, i=2;
    while(i<=100){
        n+=1/(i++);
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << n << endl;
    return 0;
}