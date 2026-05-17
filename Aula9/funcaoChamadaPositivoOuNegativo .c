#include <stdio.h>

int positivoOUNegativo(int x){
    if(x >= 1)
    printf("Positivo");
    else if(x <= -1)
    printf("Negativo");
    else
    printf("Zero");
}

int main(){
    int x = 0;

    printf("Digite um numero Poditivo ou Negativo: ");
    scanf("%d", &x);

    positivoOUNegativo(x);
    return 0;
}