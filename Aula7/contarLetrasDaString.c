#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
char nome[50];
int i = 0;
int contador = 0;

printf("Digite seu nome: ");
scanf("%s", &nome);

while (nome[i] != '\0')
{
contador++;
i++;
}
printf("Palavra: %s", nome);
printf("\nTotal de letras: %i", contador);

return 0;
}