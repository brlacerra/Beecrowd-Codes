#include<stdio.h>

int main(){

    int num=0, cont=0;
    double x=0, soma=0;

    while(cont<2){
        scanf("%lf",&x);
        if(x>0 && x<=10){
            soma+=x;
            num++;
            cont++;
        }
        else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2lf\n",soma/num);

    return 0;
}