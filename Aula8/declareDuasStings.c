#include <stdio.h>
#include <string.h>

int main(){
    char nome1[50]= "Ana";
    char nome2[50]= "Carlos";

    strcpy(nome1, nome2);

    printf(nome2);

    return 0;
}