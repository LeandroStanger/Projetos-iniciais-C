#include <stdio.h>

int main(){
int nota, frequencia, prova;

printf("Nota do aluno? ");
scanf("%d", &nota);

printf("Frequencia é de? ");
scanf("%d", &frequencia);

printf("\nO Aluno fex o prova final? (1 = sim / 0 = não) ");
scanf("%d", &prova);

if(nota >= 7 && frequencia >= 75 || prova == 1 && !(frequencia >= 75)){
printf("\nAprovado!!!");
}else{
    printf("\nReprovado!!!");
}
return 0;
}