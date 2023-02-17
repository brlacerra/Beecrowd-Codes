#include<bits/stdc++.h>

using namespace std;

int main(){

    int teste=0, pa=0, pb=0, anos=0;
    float ga=0, gb=0;

    cin >> teste;

    for(int i=0; i<teste; i++){

        cin >> pa >> pb >> ga >> gb;
        while(pa<=pb && anos<=100){
            pa*=(ga/100)+1;
            pb*=(gb/100)+1;
            anos++;
        }
        if(anos<=100){
            cout << anos << " anos." << endl;
        }
        else{
            cout << "Mais de 1 seculo." << endl;
        }
        pa=0; pb=0; anos=0; ga=0; gb=0;
    }
    return 0;
}