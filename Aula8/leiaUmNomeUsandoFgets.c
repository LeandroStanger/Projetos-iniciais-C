#include <stdio.h>
#include <string.h>

int main(){
    char nome1[50], nome2[50];

    printf("Digite um nome: ");
    fgets(nome1, 50, stdin);

    strcpy(nome2, nome1);

    printf(nome2);

    return 0;
}