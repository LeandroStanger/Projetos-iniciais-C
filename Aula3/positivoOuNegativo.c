#include <stdio.h>;

int main(){
    int numero;

    printf("Esqueva um numero: ");
    scanf("%i", &numero);

    if(numero >= 0){
        printf("O numero %i é positivo!", numero);
    }else{
        printf("O numero %i é negativo!", numero);
    };
    return 0;
}