#include<bits/stdc++.h>

using namespace std;

int main(){

    int lim=0, num=0, mp2=0, mp3=0, mp4=0, mp5=0;

    cin >> lim;

    while(lim--){
        cin >> num;

        if(num%2==0){
            mp2++;
        }
        if(num%3==0){
            mp3++;
        }
        if(num%4==0){
            mp4++;
        }
        if(num%5==0){
            mp5++;
        }
    }
    printf("%d Multiplo(s) de 2\n", mp2);
    printf("%d Multiplo(s) de 3\n", mp3);
    printf("%d Multiplo(s) de 4\n", mp4);
    printf("%d Multiplo(s) de 5\n", mp5);
}