#include <stdio.h>

int main(){
    int soma = 0;
    int i;
    for(i = 1; i <= 100; i++){
        soma = soma + i;
        if(soma > 500){
            break;
        }
    }
            printf("Total: %i\n", soma);
            printf("Qual número foi somado: %i", i);
    return 0;
}