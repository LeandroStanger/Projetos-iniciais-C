#include <stdio.h>

int main()
{
    int numero, menu;

    printf("1-Verificar número");
    printf("\n2-Sair\n");
    scanf("%i", &menu);

    switch (menu)
    {
    case 1:
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        if (numero > 10 && numero < 20)
        {
            printf("\nNumero entre 10 e 20\n");
        }

        if (numero < 10 || numero > 20)
        {
            printf("\nNumero fora do intervalo\n");
        }

        if (!(numero == 15))
        {
            printf("\nNumero diferente de 15\n");
        }
        break;
    case 2:
        printf("\nSaiu com sucesso!!!\n");
        break;
    default:
        printf("\nOpiçao invalida!!!\n");
    }
    return 0;
}