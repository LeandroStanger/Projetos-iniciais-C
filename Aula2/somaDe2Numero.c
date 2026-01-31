#include <stdio.h>

int main(){
    int x, y, soma;

    printf("Escolha um numero: ");
    scanf("%i", &x);

    printf("Escolha outro numero: ");
    scanf("%i", &y);

    soma = x + y;

    printf("Soma: %i + %i = %i", x, y, soma);
    return 0;
}