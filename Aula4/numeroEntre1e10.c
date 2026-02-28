#include <stdio.h>

int main(){
    int numero;
printf("Digite um numero entre 1 e 10: ");
scanf("%i", &numero);

if(numero > 1 && numero < 10){
    printf("O número for maior que 1 E menor que 10");
}else{
    printf("O número não é maior que 1 E menor que 10");
}
return 0;
}