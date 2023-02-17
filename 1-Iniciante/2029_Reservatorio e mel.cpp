#include<bits/stdc++.h>

using namespace std;

int main(){

    double volume=0, diametro=0;

    while(cin >> volume >> diametro){
        double area=0, altura=0;

        diametro/=2;
        area=pow(diametro,2)*3.14;
        altura=volume/area;

        cout.precision(2);
        cout.setf(ios::fixed);

        cout << "ALTURA = " << altura << endl;
        cout << "AREA = " << area << endl;
    }

    return 0;
}