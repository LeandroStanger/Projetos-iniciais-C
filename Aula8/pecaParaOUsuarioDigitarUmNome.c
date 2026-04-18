#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);

    int comtador = strlen(nome);

    printf("\n Tem %i digitos", comtador);

    return 0;
}