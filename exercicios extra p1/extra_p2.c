#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void calculo_media_aluno(float vet_medias[4], float mat_notas[4][2]){
    float aux;
    for(int i = 0 ; i < 4 ; i++){
        aux = 0;
        for (int j = 0 ; j < 2 ; j++){
            aux += mat_notas[i][j];
        }
        vet_medias[i] = aux/2;
    }
}

void calculo_media_turma(float media_turma, float vet_medias[4]){
    for (int i = 0 ; i < 4 ; i++){
        media_turma += vet_medias[i]/4;

    }
    printf("\nMedia da turma = %g", media_turma);

}

int main (void){
    float mat_notas[4][2], vet_medias[4];
    char mat_alunos[4][10];
    float media_turma = 0;

    for (int i = 0 ; i < 4 ; i++){
        printf("Digite o nome do %d aluno: ", i+1);
        gets(mat_alunos[i]);
    }
    system("cls");

    for (int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            printf("Qual a %d nota de %s? ", j+1, mat_alunos[i]);
            scanf("%f", &mat_notas[i][j]);
        }
        printf("\n");
    }
    system("cls");

    calculo_media_aluno(vet_medias, mat_notas);

    printf("Centro Universitario de Brasilia\nRelatorio de Desempenho da Turma\n\n");
    for(int i = 0 ; i < 4 ; i++){
        printf("O Aluno %s teve as seguintes notas: P1 = %g, P2 = %g e Media = %g\n", mat_alunos[i], mat_notas[i][0], mat_notas[i][1], vet_medias[i]);
        }

    calculo_media_turma(media_turma, vet_medias);

}