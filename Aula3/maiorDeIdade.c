#include <stdio.h>

int main(){
    int idade;

    printf("Quando anos você tem?\n");
    scanf("%i", &idade);

    if(idade >= 18){
        printf("Você é aduto!");
    }else{
        printf("Você é de menor!");
    };
    return 0;
}