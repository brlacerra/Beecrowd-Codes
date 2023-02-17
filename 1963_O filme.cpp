#include<bits/stdc++.h>

using namespace std;

int main(){

    double preco1=0, preco2=0, diferenca=0, taxa=0;

    cin >> preco1 >> preco2;

    taxa=preco1/100;
    diferenca=preco2-preco1;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << diferenca/taxa << "%" << endl;

    return 0;
}