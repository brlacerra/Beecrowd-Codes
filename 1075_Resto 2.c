#include<stdio.h>

int main(){

    int n, i;
    scanf("%d",&n);

    for(i=1; i<10000; i++){
        if(i%n==2){
            printf("%d",i);
        }
    }

    return 0;
}