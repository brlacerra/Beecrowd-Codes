#include<stdio.h>

int main(){

    int i; 
    float x[6], aux, cout;
    
    for(i=0; i<6; i++){
        scanf("%f",&x[i]);
    }

    for(i=0; i<6; i++){
        if(x[i]>0){
            cout++;
            aux+=x[i];
        }
    }

    printf("%.0f valores positivos\n",cout);
    printf("%.1f\n",aux/cout);

    return 0;
}