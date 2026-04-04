#include <stdio.h>

int main(){
    int numero[5];
    
    for(int i = 1; i <= 5; i++){
        printf("Digite um numero para o vetor! ");
        scanf("%i", &numero[i]);
    }
    for(int i = 1; i <= 5; i++){
        printf("%i\n", numero[i]);
    }
    return 0;
}