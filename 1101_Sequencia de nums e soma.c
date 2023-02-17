#include<stdio.h>
#include<stdio.h>

int main(){

    int m=0, n=0, aux, soma=0;

    scanf("%d %d", &m, &n);
    while(m>0 && n>0){
        if(m>n){
        aux=m;
        m=n;
        n=aux;
        }
        for(m;m<=n;m++){
            soma+=m;
            printf("%d ",m);
        }
        printf("Sum=%d\n",soma);
        soma=0;
        scanf("%d %d", &m, &n);
    }

    return 0;
}