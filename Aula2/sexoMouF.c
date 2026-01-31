#include <stdio.h>

int main(){
    char sexo;

    printf("Qual teu sexo M = Masculino, F = Feminino? \n");
    scanf("%c", &sexo);

    printf("\nSeu sexo é %c", sexo);
    return 0;
}