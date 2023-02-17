#include<stdio.h>
#include<stdlib.h>

int main(){

    int x=1, y=7;

        
    while(y>=5){

        printf("I=%d J=%d\n", x,y);
        y--;

        if(y==4){
            y+=3;
            x+=2;
        }
        if(x>9){
            y=0;
        }
    }
    return 0;
}