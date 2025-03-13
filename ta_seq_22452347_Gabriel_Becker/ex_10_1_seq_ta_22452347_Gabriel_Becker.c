#include <stdio.h>
#include <math.h>

int main(void){

    int A,B;
    float raiz;

    printf("Calculadora Ax + B = 0\n Qual o valor de A? ");
    scanf("%d",&A);
    printf(" Qual o valor de B? ");
    scanf("%d",&B);

    raiz = -B/A;

    printf("Raiz = %f", raiz);

}

