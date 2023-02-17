#include<stdio.h>

int main(){
    int x=0, i=0, qtd=0, coelhos=0, ratos=0, sapos=0, total=0, aux=0;
    char cob;

    scanf("%d",&x);

    for(i=0; i<x; i++){
        scanf("%d %c",&qtd, &cob);
        total+=qtd;

        if(cob=='C'){
            coelhos+=qtd;
        }
        else if(cob=='S'){
            sapos+=qtd;
        }
        else if(cob=='R'){
            ratos+=qtd;
        }
    }

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n",(float)(coelhos*100)/total);
    printf("Percentual de ratos: %.2f %%\n",(float)(ratos*100)/total);
    printf("Percentual de sapos: %.2f %%\n",(float)(sapos*100)/total);

     return 0;
}