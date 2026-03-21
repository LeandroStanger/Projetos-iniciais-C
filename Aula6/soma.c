#include <stdio.h>

int main (){
    int i;
    int soma = 0;
    do{
    printf("Digite um Numero? ");
    scanf("%d", &i);
    soma = soma + i;
    }while(i != 0);
printf("Total: %d", soma);
}