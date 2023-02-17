#include<stdio.h>

int main() {

    int i, f, hora;
    scanf("%d %d",&i,&f);

    if(i==f){
        hora=24;
    }
    if(f>i){
        hora=f-i;
    }
    if(i>f){
        hora=(24-i)+f;
    }
    printf("O JOGO DUROU %d HORA(S)\n",hora);
    return 0;
}