#include<stdio.h>

int main() {

    int cod, qtd; 
    double preco;
    scanf("%d %d",&cod, &qtd);

    if(cod==1){
        preco=qtd*4;
        printf("Total: R$ %.2lf\n",preco);
    }
    if(cod==2){
        preco=qtd*4.5;
        printf("Total: R$ %.2lf\n",preco);
    }
    if(cod==3){
        preco=qtd*5;
        printf("Total: R$ %.2lf\n",preco);
    }
    if(cod==4){
        preco=qtd*2;
        printf("Total: R$ %.2lf\n",preco);
    }
    if(cod==5){
        preco=qtd*1.5;
        printf("Total: R$ %.2lf\n",preco);
    }

    return 0;
}