#include<stdio.h>

int main(){

    int x[6], i, cout;
    
    for(i=0; i<6; i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<6; i++){
        if(x[i]>0){
            cout++;
        }
    }

    printf("%d valores positivos\n",cout);

    return 0;
}