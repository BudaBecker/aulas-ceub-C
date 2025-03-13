#include <stdio.h>

int main(void){
    int num;
    printf("Qual numero deseja analisar? (Apenas inteiro) ");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("%d eh par!", num);
    }
    else{
        printf("%d eh impar!", num);
    }
}