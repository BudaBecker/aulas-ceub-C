#include <stdio.h>

int main(void){

    float x1,x2,x3;
    printf("Qual o primeiro valor? ");
    scanf("%f",&x1);
    printf("Qual o segundo valor? ");
    scanf("%f",&x2);
    printf("Qual o terceiro valor? ");
    scanf("%f",&x3);

    printf("\nMedia dos valores: %f", (x1+x2+x3)/3);

}
