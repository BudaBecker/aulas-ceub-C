#include <stdio.h>
#include <math.h>

int main(void){

    float raio, area;
    printf("Qual o valor do raio? ");
    scanf("%f",&raio);

    if (raio < 0){
        printf("Nao existe raio negativo!");
        exit(0);
    }

    area = (4.0/3.0) * (M_PI) * pow(raio, 3);
    printf("O volume da esfera = %f", area);

}
