#include <stdio.h>
#include <math.h>

int main(void){
    unsigned long int num;
    int soma = 0;
    scanf("%ld", &num);
    printf("A soma dos algarismos de %ld",num);
    
    for( ; num > 0 ; num = floor((float)num/10)){
        soma += num%10;
    }

    printf(" = %d", soma);
}