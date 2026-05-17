#include <stdio.h>

int maiorNumero(int x, int y){
    if(x > y)
    return x;
    else
    return y;
}

int main(){
    int x, y = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    printf("Digite o segundo numero: ");
    scanf("%d", &y);

  printf("%d", maiorNumero(x, y));
    return 0;
}