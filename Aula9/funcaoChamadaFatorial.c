#include <stdio.h>

int fatorial(int x){
int i, fat = 1;
for(i = 1; i <= x; i++){
    fat = fat * i;
}

return fat;
}

int main(){
    int x = 0;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("%d", fatorial(x));
    return 0;
}