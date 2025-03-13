#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    float raio, altura;
    printf("Qual o valor do raio? ");
    scanf("%f",&raio);
    printf("\nQual a altura do cilindro? ");
    scanf("%f",&altura);

    if (raio < 0 || altura < 0){
        printf("Nao existe distancia negativa!");
        exit(0);
    }

    printf("\n  Area lateral do cilindro = %f", (M_PI)*2*raio*altura);
}

