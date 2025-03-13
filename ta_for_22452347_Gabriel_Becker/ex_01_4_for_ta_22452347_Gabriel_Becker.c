#include <stdio.h>

int main(void){
    float n, soma=0;
    scanf("%f", &n);
    
    for(int i = n ; i>=0 ; i--){
        soma += i;
    }
    
    printf("%f", soma/n);
}