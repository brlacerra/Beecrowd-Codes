#include<stdio.h>

int main(){

    int n=0, x=0, y=0, i=0, aux=0, soma=0;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d %d", &x, &y);

        if(x>y){
            aux=x;
            x=y;
            y=aux;
        }
        for(x=x+1; x<y; x++){
            if(x%2!=0){
                soma+=x;
            }
        }
        printf("%d\n",soma);
        soma=0;
    }

    return 0;
}