#include<stdio.h>

int main(){

    int x, i, num=1;
    scanf("%d",&x);

    for(i=0; i<x; i++){
        printf("%d ",num);
        num++;
        printf("%d ",num);
        num++;
        printf("%d PUM\n",num);
        num+=2;
    }

    return 0;
}