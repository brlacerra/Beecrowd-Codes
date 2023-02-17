#include <stdio.h>

int main() {

    float a, b, c, d, media, exame, fmedia;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    media=((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1f\n",media);

    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    if(media>=5 && media<7){
        printf("Aluno em exame.\n");
        scanf("%f",&exame);
        printf("Nota do exame: %.1f\n",exame);
        fmedia=(media+exame)/2;
        if(media>=5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",fmedia);
    }
    if(media<5){
        printf("Aluno reprovado.\n");
    }

    return 0;
}