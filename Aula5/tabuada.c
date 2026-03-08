#include <stdio.h>

int main(){
    int numero = 0;
    int i = 0;
    int soma;

    printf("Qual Tabuado você degeja saber?\n");

     printf("Digite um numero: ");
     scanf("%d", &numero);

    while(i <= 10){
    printf("%d x %d = %d\n", numero, i, soma);
    i++;
    soma = numero * i;
    }

    return 0;
}