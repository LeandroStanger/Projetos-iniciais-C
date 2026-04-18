#include <stdio.h>
#include <string.h>

int main(){
    char item[50]= ("Computator");
    char item2[50];

    printf("Item 1:%s", item);

    strcpy(item2, item);

    printf("\nItem 2 copia: %s", item2);

    return 0;
}