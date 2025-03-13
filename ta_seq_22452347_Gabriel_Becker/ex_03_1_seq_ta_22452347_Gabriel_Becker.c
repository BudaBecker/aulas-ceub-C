#include <stdio.h>
#include <stdlib.h>

int main(void){

    float altura, base, area;

    printf("Calculadora de triangulos!\n  Qual a altura? ");
    scanf("%f", &altura);
    printf("\n  Qual a base? ");
    scanf("%f", &base);

    if(altura < 0 || base < 0){
        printf("Nao existe distancia negativa!");
        exit(0);
    }

    area = (base*altura)/2;

    printf("Triangulo de base %f e altura %f tem area de: %.3f", base, altura, area);

}
