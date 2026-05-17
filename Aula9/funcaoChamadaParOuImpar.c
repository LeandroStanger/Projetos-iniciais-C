#include <stdio.h>

int parOuImpar(int x){
    if(x%2==0)
        printf("Par");
    else
    printf("Impar");
    
}

int main(){
    int x = 0;
    printf("Par ou Inpar: ");
    scanf("%d", &x);
    
    parOuImpar(x);
    return 0;
}