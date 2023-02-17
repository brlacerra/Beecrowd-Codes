#include<stdio.h>
#include<string.h>

int main() {

    char ordem[15], familia[15], genero[15];

    scanf("%s %s %s",&ordem, &familia, &genero);

    if(strcmp(ordem,"vertebrado")==0){
        if(strcmp(familia,"ave")==0){
            if(strcmp(genero,"carnivoro")==0){
                printf("aguia\n");
            }
            else if(strcmp(genero,"onivoro")==0){
                printf("pomba\n");
            }
        }
        else if(strcmp(familia,"mamifero")==0){
            if(strcmp(genero,"onivoro")==0){
                printf("homem\n");
            }
            else if(strcmp(genero,"herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(ordem,"invertebrado")==0){
        if(strcmp(familia,"inseto")==0){
            if(strcmp(genero,"hematofago")==0){
                printf("pulga\n");
            }
            else if(strcmp(genero,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(familia,"anelideo")==0){
            if(strcmp(genero,"hematofago")==0){
                printf("sanguessuga\n");
            }
            else if(strcmp(genero,"onivoro")==0){
                printf("minhoca\n");
            }
        }

    }

    return 0;
}