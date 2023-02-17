#include <stdio.h>

int main(){

    int dia, hora, min, seg, diaf, horaf, minf, segf;
    scanf("Dia %d",&dia);
    scanf("%d : %d : %d\n", &hora, &min, &seg);
    scanf("Dia %d",&diaf);
    scanf("%d : %d : %d", &horaf, &minf, &segf);

    diaf-=dia;
    horaf-=hora;
    minf-=min;
    segf-=seg;

    if(horaf<0){
        diaf--;
        horaf+=24;
    }
    if(minf<0){
        horaf--;
        minf+=60;
        if(horaf<0){
        diaf--;
        horaf+=24;
    }
    }
    if(segf<0){
        minf--;
        segf+=60;
        if(minf<0){
        horaf--;
        minf+=60;
        if(horaf<0){
        diaf--;
        horaf+=24;
    }
    }
    }

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", diaf, horaf, minf, segf);

    return 0;
}