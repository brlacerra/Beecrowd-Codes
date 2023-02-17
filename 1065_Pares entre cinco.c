#include<stdio.h>

int main(){
    
    int x, i, par=0, impar=0, posi=0, nega=0;

    for(i=0; i<5; i++){
        scanf("%d",&x);

        if(x>0){
            posi++;
        }
        else{
            if(x!=0){
            nega++;
        }
        }
        
        if(x%2==0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",posi);
    printf("%d valor(es) negativo(s)\n",nega);
    
    return 0;
}