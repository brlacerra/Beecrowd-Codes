#include<bits/stdc++.h>

using namespace std;

int main(){

    int a=0, b=0, c=0, d=0;

    //acb, cbd, bda, adc
    cin >> a >> b >> c >> d;

    if((b-c)<a && a<(b+c) && (a-c)<b && b<(a+c) && (a-b)<c && c<(a+b)){
        cout << "S" << endl;
    }
    else if((b-d)<c && c<(b+d) && (c-d)<b && b<(c+d) && (c-b)<d && d<(c+b)){
        cout << "S" << endl;
    }
    else if((d-a)<b && b<(d+a) && (b-a)<d && d<(b+a) && (b-d)<a && a<(b+d)){
        cout << "S" << endl;
    }
    else if((d-c)<a && a<(d+c) && (a-c)<d && d<(a+c) && (a-d)<c && c<(a+d)){
        cout << "S" << endl;
    }
    else{
        cout << "N" << endl;
    }

    return 0;
}