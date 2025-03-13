#include <stdio.h>

int main(void){
    float numero;
    printf("Qual numero deseja analisar? ");
    scanf("%f", &numero);

    if (numero < 0){
        printf("%g eh negativo, e seu triplo eh: %g", numero, numero*3);
    }
    else if (numero > 0){
        printf("%g eh positivo, e seu dobro eh: %g", numero, numero*2);
    }
    else{
        printf("%g eh nulo.", numero);
    }
}