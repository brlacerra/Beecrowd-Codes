#include<stdio.h>

int main(){

    int n, i;

    scanf("%d",&n);
    int x[n];

    for(i=0; i<n; i++){
        scanf("%d",&x[i]);
    }
    for(i=0; i<n; i++){
        if(x[i]==0){
            printf("NULL\n");
        }
        else if(x[i]>0){
            if(x[i]%2==0){
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        else{
            if(x[i]%2==0){
                printf("EVEN NEGATIVE\n");
            }
            else{
                printf("ODD NEGATIVE\n");
            }

        }
    }
    
    return 0;
}