#include <stdio.h>

int main(void){
    int vetor [4];
    printf("Digite 4 numeros para esse vetor: \n");
    
    for (int i = 0 ; i < 4 ; i++)
        scanf("%d", &vetor[i]);

    for (int i = 3 ; i >= 0 ; i--)
        printf("[%d] ", vetor[i]);
}