#include <stdio.h>
#include <string.h>

int main(){
    char nome[50] = "Leandro";
    char nome2[50] = "Stanger";
    char nome3[50] = "Dev!";

    strcat(nome, " ");
    strcat(nome, nome2);
    strcat(nome, " ");
    strcat(nome, nome3);

    printf(nome);

    return 0;
}