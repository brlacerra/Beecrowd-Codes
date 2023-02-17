#include<stdio.h>

int main(){

    int escolha=1, cont=0;
    double x=0, soma;

    while(escolha==1){
        soma=0; cont=0;
        while(cont<2){
            scanf("%lf", &x);
        if(x>0 && x<=10){
            soma+=x;
            cont++;
        }
        else{
            printf("nota invalida\n");
        }
        if(cont==2){
            printf("media = %.2lf\n",(float)soma/2);
            
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&escolha);
        }while(escolha!=1 && escolha!=2);
        }
    }
    }
    return 0;
}