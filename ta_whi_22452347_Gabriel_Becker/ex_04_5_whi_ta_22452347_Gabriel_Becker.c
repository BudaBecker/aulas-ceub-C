#include <stdio.h>

int main(void){
    int iteration = 0;
    float notas, soma = 0;
    
    while(iteration < 4){
        printf("Nota do Aluno numero %d: ", iteration+1);
        scanf("%f", &notas);
        soma += notas;
        iteration++;
    }
    
    printf("\nMedia: %.2f", soma/iteration);
}