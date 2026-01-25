// Bibliteca para endrada e saida
#include <stdio.h>
int main()
{
    // Variável para guardar o número digitado

    int numero;

    // Variável para  guardar o dobro do número
    int dobro;

    printf("Digite um numero: ");

    // Lê o número do usuário
    scanf("%d", &numero);

    // Calcula o dobro
    dobro = numero * 2;

    // Mostra o resultado
    printf("O dobro do numero eh: %d\n", dobro);

    // Final do programa
    return 0;
}