#include <stdio.h>
int main(){

    int x=1, y=7;
    while(x<=9){
        printf("I=%d J=%d\n", x, y--);
        printf("I=%d J=%d\n", x, y--);
        printf("I=%d J=%d\n", x, y--);
        x+=2;
        y+=5;
    }
 return 0;
}