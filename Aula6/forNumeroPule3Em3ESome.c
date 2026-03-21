#include <stdio.h>

int main()
{
    int soma = 0;
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        soma += i;
        if (soma > 200)
        {
            break;
        }
    }
    printf("Total: %d", soma);

    return 0;
}