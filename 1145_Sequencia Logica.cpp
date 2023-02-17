#include<iostream>

using namespace std;

int main(){

    int x, y, i=0, n=1;
    cin >> x >> y;

    while(i<y){
        i++;
        if(n==x){
            cout << i << endl;
            n=1;
        }
        else{
            cout << i << " ";
            n++;
        }
    }

    return 0;
}