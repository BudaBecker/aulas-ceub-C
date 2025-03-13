#include <stdio.h>

int main(void){
    float notas [10];
    float media = 0;

    for (int i = 0 ; i < 10 ; i++){
        printf("Nota %d aluno: ", i+1);
        scanf("%f", &notas[i]);
    }
    
    for (int i = 0 ; i < 10 ; i++){
        media += notas[i];
    }
    printf("\nMedia da turma: %.2f", media/10);
}