#include <stdio.h>

int pot(int base, int exp){
    int result = 1;
    for (int i = 0 ; i < exp ; i++){
        result = result*base;
    }
    return result;
}

int main (void){
    int base, exp;
    printf("Qual a base? ");
    scanf("%d", &base);
    printf("Qual o exp? ");
    scanf("%d", &exp);

    printf("\n%d^%d = %d", base, exp, pot(base, exp));
}