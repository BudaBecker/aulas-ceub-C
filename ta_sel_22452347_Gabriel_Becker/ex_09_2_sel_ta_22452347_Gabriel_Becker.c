#include <stdio.h>
#include <math.h>

int main(void){

    int A, B, C;
    float delta, x1, x2;
    
    printf("Calculadora Ax^2 + Bx + C = 0 (A, B e C sao inteiros!)\n\n    Qual o valor de A: ");
    scanf("%d",&A);
    printf("    Qual o valor de B: ");
    scanf("%d",&B);
    printf("    Qual o valor de C: ");
    scanf("%d",&C);

    delta = pow(B,2) - 4*A*C;

    if(delta < 0){
        printf("\nA equacao nao existe raiz real.");
    }
    else if(delta == 0){
        x1 = (-B)/2*A;
        printf("A raiz da equacao eh: %.0f", x1);
    }
    else{
        x1 = (-B+sqrt(delta))/2*A;
        x2 = (-B-sqrt(delta))/2*A;
        printf("As raizes da equacao sao: %.0f e %0.f", x1, x2);
    }
}