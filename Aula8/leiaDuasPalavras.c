#include <stdio.h>
#include <string.h>

int main(){
    char palavra1[50]= "Casa";
    char palavra2[50]= "Carro";

    if(strcmp(palavra1, palavra2) == 0){
        printf("Os duas palavras são iguais!");
    }else{
        printf("Os duas não palavras são iguais!");
    }
    return 0;
}