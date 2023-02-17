#include<stdio.h>

int main() {

    int A, B, C, D, CD, AB, AP;

    scanf("%d %d %d %d",&A,&B,&C,&D);

    CD=C+D;
    AB=A+B;
    AP=A%2;

    if(B>C && D>A && CD>AB && C>0 && D>0 && AP==0){
        printf("Valores aceitos\n");
    }
    else{
        printf("Valores nao aceitos\n");
    }

    return 0;
}