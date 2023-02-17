#include<stdio.h>

int main(){

    int x, y, n=0, aux;
    scanf("%d %d", &x, &y);

    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }

    for(x+=1; x<y; x++){
        if(x%2!=0){
            n+=x;
        }
    }
    
    printf("%d\n",n);

    return 0;
}