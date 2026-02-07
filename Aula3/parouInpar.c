#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero!\n");
    scanf("%i", &numero);

    if(numero %2 == 0){
        printf("O numero %i é par!");
    }else{
        printf("O numero %i é inpar!");
    };
    return 0;
}