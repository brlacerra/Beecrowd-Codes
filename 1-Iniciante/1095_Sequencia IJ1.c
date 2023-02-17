#include<stdio.h>

int main(){

    int x, y=1;
    for(x=60; x>=0; x-=5){
        printf("I=%d J=%d\n",y,x);
         y+=3;

    }

    return 0;
}