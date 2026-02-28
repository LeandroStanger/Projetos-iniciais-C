#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero diferente de 5: ");
    scanf("%d", &numero);

    if(!(numero == 5)){
        printf("O numero é diferenre de 5!");
    }else{
        printf("O numero é 5!");
    }
    return 0;
}