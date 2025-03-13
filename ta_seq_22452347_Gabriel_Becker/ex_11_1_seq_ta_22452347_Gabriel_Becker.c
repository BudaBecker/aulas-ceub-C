#include <stdio.h>

int main(void){

    int x1, x2, troca;

    printf("Primeiro numero: ");
    scanf("%d",&x1);
    printf("\nSegundo numero: ");
    scanf("%d",&x2);

    troca = x1;
    x1=x2;
    x2=troca;

    printf("\nNovo primeiro numero: %d\nNovo segundo numero: %d",x1, x2);

}
