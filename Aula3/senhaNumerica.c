#include <stdio.h>

int main(){
    int senha, login;

    printf("Digide um senha: ");
    scanf("%i", &senha);

    printf("Digite sua senha: ");
    scanf("%i", &login);

    if(login == senha){
        printf("Logado com suceso!!!");
    }else{
        printf("Senha erada!\n\nDigite a senha novamente!");
        printf("\n\nDigite sua senha: ");
        scanf("%i", &login);
    }
    return 0;
}