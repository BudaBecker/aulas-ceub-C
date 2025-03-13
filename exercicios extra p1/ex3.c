#include <stdio.h>
#include <math.h>

int main(void){
    float x1, y1, x2, y2, dist;
    
    printf("Qual o valor do primeiro ponto? ");
    scanf("%f", &x1);
    scanf("%f", &y1);  

    printf("Qual o valor do segundo ponto? ");
    scanf("%f", &x2);
    scanf("%f", &y2);

    dist = sqrt(pow((x1-x2),2) + pow((y1-y2),2));

    printf("Distancia dos pontos = %g", dist);
}