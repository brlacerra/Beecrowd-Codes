#include <stdio.h>

int main(){

    int n, i, aux=0, aux1;

    for(i=1; i<=100; i++){
        scanf("%d",&n);

        if(n>aux){
            aux=n;
            aux1=i;
        }
    }

    printf("%d\n%d\n",aux, aux1);

    return 0;
}