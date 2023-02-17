#include<stdio.h>
#include<stdlib.h>

int main() {

    int a, h, m;
    scanf("%i", &a);
    
    h=a/3600;
    a-=h*3600;
    m=a/60;
    a-=m*60;
    
    printf("%i:%i:%i\n", h, m, a);
    return 0;
}