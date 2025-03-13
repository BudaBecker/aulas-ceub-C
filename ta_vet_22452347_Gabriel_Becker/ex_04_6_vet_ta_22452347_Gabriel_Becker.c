#include <stdio.h>

int main(void){
    float notas [10];
    float media = 0;
    int maior = 0;

    for (int i = 0 ; i < 10 ; i++){
        printf("Nota %d aluno: ", i+1);
        scanf("%f", &notas[i]);
        if (notas[i] > 7){
            maior++;
        }
    }
    
    for (int i = 0 ; i < 10 ; i++){
        media += notas[i];
    }
    printf("\nMedia da turma: %.2f\nNotas maiores que 7: %d", media/10, maior);
}