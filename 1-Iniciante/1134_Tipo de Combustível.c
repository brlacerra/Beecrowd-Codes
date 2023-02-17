#include<stdio.h>

int main(){

    int x=0, alcool=0, gas=0, diesel=0;

    while(x!=4){
        scanf("%d",&x);

        if(x==1){
            alcool++;
        }
        else if(x==2){
            gas++;
        }
        else if(x==3){
            diesel++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",diesel);

    return 0;
}