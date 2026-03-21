#include <stdio.h>

int main(){
    int numero;
    int i;
    int soma = 0;

        printf("Qual Tabuado você degeja saber?\n");
        
        printf("Digite um numero: ");
        scanf("%d", &numero);
    do{
    soma = numero * i;
    printf("%d x %d = %d\n", numero, i, soma);
    i++;
    }while(i <= 10);
}