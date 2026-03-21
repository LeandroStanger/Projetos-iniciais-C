#include <stdio.h>

int main()
{
    int numeroY, numeroX, opicao;
    int valor = 0;
    printf("1- Soma\n2- Subtrair\n3-Sair\n");
    scanf("%i", &opicao);
    do
    {
        if (opicao == 1)
        {
            printf("Digite um numero: ");
            scanf("%i %i", &numeroX, &numeroY);
            valor = numeroX + numeroY;
            printf("%d + %d = %d\n", numeroX, numeroY, valor);
        }
        else if (opicao == 2)
        {
            printf("Digite um numero: ");
            scanf("%i %i", &numeroX, &numeroY);
            valor = numeroX - numeroY;
            printf("%i - %i = %i\n", numeroX, numeroY, valor);
        }
    }while(opicao != 3);
    return 0;
}