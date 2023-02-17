#include <stdio.h>
int main (){
    float x;
    scanf ("%f", &x);
    if ((x>=0) && (x<=2000)){
        printf ("Isento\n");
    }else if ((x>2000) && (x<=3000)){
        x= ((x-2000)*8/100);
        printf ("R$ %.2f\n",x);
    }else if ((x>3000) && (x<=4500)){
        x= (((x-3000)*18/100)+((1000*8/100)));
        printf ("R$ %.2f\n",x);
    }else if (x>4500){
         x= (((x-4500)*28/100)+(1000*8/100)+((1500*18/100)));
        printf ("R$ %.2f\n",x);

    }
    return 0;
}