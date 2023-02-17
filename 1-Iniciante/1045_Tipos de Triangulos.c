#include<stdio.h>

int main() {

    float x, a, b, c;
    scanf("%f %f %f",&a,&b,&c);
    
    if(a<b){
        x=a; 
        a=b; 
        b=x; 
    }
    if(b<c){
        x=b;
        b=c;
        c=x;
    } 
    if(a<b){
        x=a;
        a=b;
        b=x;
    }
    
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(pow(a,2)==pow(b,2)+pow(c,2)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(a,2)>pow(b,2)+pow(c,2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(pow(a,2)<pow(b,2)+pow(c,2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }
        else{
            if(a==b || b==c){
            printf("TRIANGULO ISOSCELES\n");
        } 
        }
    }
    return 0;
}