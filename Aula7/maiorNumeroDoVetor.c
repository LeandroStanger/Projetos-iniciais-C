#include <stdio.h>

int main()
{
    int numero[8];
    int maior;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite um numero! ");
        scanf("%i", &numero[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        if (numero[i] > maior){
          maior = numero[i];
        }
    }
    printf("Maior vetor: %d", maior);
    return 0;
}