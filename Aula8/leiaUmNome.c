#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];

    printf("Digite um nome: ");
    fgets(nome, 50, stdin);

    int comtador = strlen(nome);

    if(comtador > 10){
        printf("Nome %s muito grande!", nome);
    }else{
        printf("Nome %s pequeno!", nome);
    }

    return 0;
}