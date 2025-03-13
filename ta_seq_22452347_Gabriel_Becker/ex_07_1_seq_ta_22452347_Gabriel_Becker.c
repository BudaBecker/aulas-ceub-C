#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    float raio;
    printf("Qual o valor do raio? ");
    scanf("%f",&raio);

    if (raio < 0){
        printf("Nao existe raio negativo!");
        exit(0);
    }

    printf("\n  Comprimento da circunferencia = %f", (M_PI)*raio*2);
}

