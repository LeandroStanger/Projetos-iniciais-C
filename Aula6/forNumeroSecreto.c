#include <stdio.h>

int main(){
    int numeroSecreto = 15;
    int numero;

    for(int i = 1; i <= 5; i++){
        printf("\nTem um número secreto: ");
        scanf("%d", &numero);
        if(numero == numeroSecreto){
            printf("Ganhou");
            break;
        }
        
        if(i == 5){
            printf("Perdeu");
        }
    }
    return 0;
}