#include<stdio.h>

int main(){

    float n1, n2, n3, media;
    int  x, i;
    scanf("%d",&x);

    for(i=0; i<x; i++){
        scanf("%f %f %f",&n1, &n2, &n3);
        media=((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n",media);
    }

    return 0;
}