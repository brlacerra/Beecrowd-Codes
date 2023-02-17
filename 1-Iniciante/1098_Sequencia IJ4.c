#include<stdio.h>

int main(){

    float x=0;
    int xn;
		
    while(xn<2){
        xn=x;
        if(x==0 || x==1 || xn==2){
            printf("I=%d J=%d\n", xn, xn+1);
            printf("I=%d J=%d\n", xn, xn+2);
            printf("I=%d J=%d\n", xn, xn+3);
        }
        else{
            printf("I=%.1f J=%.1f\n", x, x+1);
            printf("I=%.1f J=%.1f\n", x, x+2);
            printf("I=%.1f J=%.1f\n", x, x+3);	
        }
        x+=0.2;
    }

    return 0;
}