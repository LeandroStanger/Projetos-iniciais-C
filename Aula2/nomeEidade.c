#include <stdio.h>

int main(){
    char nome[30] = "";
    int idade = 0;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Nome: %s, Idade: %d", nome, idade);
    return 0;
}