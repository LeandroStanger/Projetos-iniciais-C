#include <stdio.h>

float media(float a, float b, float c){
return (a + b + c)/ 3;
}

int main(){
    float a, b, c;



    printf("\nDigite 3 numero: ");
    scanf("%f %f %f", &a, &b, &c);



    printf("Media É: %.2f", media(a, b, c));
    return 0;
}