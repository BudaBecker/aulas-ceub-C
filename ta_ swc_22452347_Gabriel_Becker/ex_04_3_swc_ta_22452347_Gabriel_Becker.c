#include <stdio.h>

int main(void){
    char op;
    float a, b, conta;
    printf("Caluladora, qual o peracao deseja fazer?\n"
           " '+'\n"
           " '-'\n"
           " '*'\n"
           " '/'\n");
    op = getchar();
    printf("Quais valores de A%cB?\n", op);
    printf("A: ");
    scanf("%f", &a);
    printf("B: ");
    scanf("%f", &b);

    switch (op)
    {
    case '+':
        conta = a + b;
        break;
    case '-':
        conta = a - b;
        break;
    case '*':
        conta = a * b;
        break;
    case '/':
        conta = a / b;
        break;
    }

    printf("Resultado: %.2f",conta);
}