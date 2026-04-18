#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], frase2[100];

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    strcpy(frase2, frase);
    printf("\n Frase 1: %s", frase);
    printf("\n Frase 2 copia: %s", frase2);
   
    return 0;
}