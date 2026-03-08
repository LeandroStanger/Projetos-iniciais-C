#include <stdio.h>

int main(){
    int i = 1;
    int numero;
    int soma = 0;

    while(i <= 5){
    printf("Digite numero!\n");
    scanf("%i", &numero);
    i++;
    soma = soma + numero;
    }

    printf("Soma total: %d", soma);
    return 0;
}