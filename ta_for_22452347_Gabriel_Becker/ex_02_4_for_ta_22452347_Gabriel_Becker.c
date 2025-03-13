#include <stdio.h>

int main(void){
    int soma=0;
    for (int i = 30 ; i>=5 ; i-=3){
        printf("%d\n",i);
        soma += i;
    }
    printf("soma: %d", soma);
}