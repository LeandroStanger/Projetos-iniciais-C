#include <stdio.h>

int main(){
    int nota1, nota2, soma;

    printf("Escreva a Primeira nota?\n");
    scanf("%i", &nota1);

    printf("Escreva a segunda nota?\n");
    scanf("%i", &nota2);

    soma = (nota1 + nota2) / 2;

    if (soma >= 7)
    {
        printf("Avrovado! com nota: %i", soma);
    }
    else
    {
        printf("Reprovado! com nota: %i", soma);
    };
    return 0;
}