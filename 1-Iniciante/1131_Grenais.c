#include<stdio.h>

int main(){

    int grenal=0, inter=0, golint=0, gremio=0, golgre=0, empate=0, escolha=1;

    while(escolha==1){
        scanf("%d %d",&inter,&gremio);
        grenal++;
        if(gremio==inter){
            empate++;
        }
        if(gremio>inter){
            golgre++;
        }
        else{
            golint++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&escolha);
    }
    printf("%d grenais\n",grenal);
    printf("Inter:%d\n",golint);
    printf("Gremio:%d\n",golgre);
    printf("Empates:%d\n",empate);

    if(golgre>golint){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Inter venceu mais\n");
    }

    return 0;
}