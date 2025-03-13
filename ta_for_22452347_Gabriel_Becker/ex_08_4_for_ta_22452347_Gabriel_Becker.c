#include <stdio.h>

int main(void){
    int H;
    float soma=0;
    scanf("%d", &H);
    
    if (H <= 0){
        printf("H deve ser inteiro positivo nao nulo.");
    }

    for(int i = 1 ; i<=H ; i++){
        soma += 1/(float)i;
    }

    printf("Soma: %f", soma);
}