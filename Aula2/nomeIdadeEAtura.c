#include <stdio.h>

int main(){
    char nome[30];
    int idade;
    float altura;

    printf("Seu nome: ");
    scanf("%s", &nome);

    printf("Sua idade: ");
    scanf("%i", &idade);

    printf("Sua altura: ");
    scanf("%f", &altura);

    printf("Nome: %s, Idade: %i, Altura: %.2f", nome, idade, altura);
    return 0;
}