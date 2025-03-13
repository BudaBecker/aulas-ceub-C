#include <stdio.h>

int main(void) {
    float num1, num2;

    printf("Qual o primeiro numero? ");
    scanf("%f", &num1);
    printf("Qual o segundo numero? ");
    scanf("%f", &num2);

    num1 < num1 ? printf("%g eh maior que %g", num1, num2) : 
    num1 == num2 ? printf("%g = %g", num1, num2) : 
    printf("%g eh maior que %g", num2, num1);
}