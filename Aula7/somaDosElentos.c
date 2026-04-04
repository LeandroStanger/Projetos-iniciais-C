#include <stdio.h>

int main(){
    int numeros[2];
     int i;
    for(i = 0; i < 2; i++){
    printf("Digite um numero para somar! ");
    scanf("%i", &numeros[i]);
    }

        int soma = numeros[0] + numeros[1];
        printf("%i + %i = %i", numeros[0], numeros[1], soma);

    return 0;
}