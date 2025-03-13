#include <stdio.h>

int main(void){

    int valor;
    printf("Qual valor deseja analisar? (int) ");
    scanf("%d", &valor);

    if(valor == 100){
        printf("%d eh igual a 100.", valor);
    }
    else if(valor < 100){
        printf("%d eh menor que 100.", valor);
    }
    else{
        printf("%d eh maior que 100.", valor);
    }
}