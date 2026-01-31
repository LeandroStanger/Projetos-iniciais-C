#include <stdio.h>

int main(){
    char nome[30];
    float nota1, nota2;

    printf("Nome do aluno: ");
    scanf("%s", &nome);

    printf("Nota 1 do aluno: ");
    scanf("%f", &nota1);
    
    printf("Nota 2 do aluno: ");
    scanf("%f", &nota2);
    
    printf("Nome: %s, Nota1: %.2f, Nota2: %.2f", nome, nota1, nota2);
    return 0;
}