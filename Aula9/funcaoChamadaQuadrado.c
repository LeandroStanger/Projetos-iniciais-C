#include <stdio.h>

int soma(int x){
    return x * x;
}

int main(){
int x = 0;

printf("Digite um numero: ");
scanf("%d", &x);

printf("Volor quadrade É: %d", soma(x));
return 0;
}