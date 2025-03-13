#include <stdio.h>

int main(void){

    float p1, p2;

    printf("Qual a primeira nota? ");
    scanf("%f",&p1);
    printf("\nQual a segunda nota? ");
    scanf("%f",&p2);

    printf("\nMedia final: %.2f",(p1+p2)/2);

}
