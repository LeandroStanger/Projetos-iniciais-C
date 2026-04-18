#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);

    int comtador = strlen(nome);
    if(nome[comtador -1] == '\n'){
        nome[comtador - 1] = '\0';
    }
    printf("Tem %s digitos", nome);

    return 0;
}