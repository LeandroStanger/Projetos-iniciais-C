#include <stdio.h>

int main(){
    int media = 0;
    int numero, i;
    

    do{
        printf("Digite um Numero: ");
        scanf("%d", &numero);

        if(numero >= 0){
            media = media + numero;
             i++;
        }
    }while(numero >= 0);

    if(i > 0){
     media = media / i;
        printf("Media: %d", media);
    }else{
        printf("Numero invalido");
    }
    return 0;
}