#include<stdio.h>

int main(){

    float x, sala, rea;
    int perce;
    scanf("%f",&x);

    if(x>=0 && x<=400){
        perce=15;
    }
    if(x>400 && x<=800){
        perce=12;
    }
    if(x>800 && x<=1200){
        perce=10;
    }
    if(x>1200 && x<=2000){
        perce=7;
    }
    if(x>2000){
        perce=4;
    }
    sala=x+(x/100)*perce;
    rea=sala-x;

    printf("Novo salario: %.2f\n",sala);
    printf("Reajuste ganho: %.2f\n",rea);
    printf("Em percentual:  %d %%\n",perce);

    return 0;
}