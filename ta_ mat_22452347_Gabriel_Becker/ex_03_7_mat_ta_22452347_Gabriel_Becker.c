#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int mat_1[5][5];
    int mat_2[5][5];
    int mat_result[5][5];

    printf("Matriz 1:\n");
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            mat_1[i][j] = rand() % 20 + 1;
            printf("[%d] ", mat_1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            mat_2[i][j] = rand() % 20 + 1;
            printf("[%d] ", mat_2[i][j]);
        }
        printf("\n");
    }

    printf("\nResultados:\n");
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            mat_result[i][j] = mat_1[i][j] + mat_2[i][j];
            printf("[%d] ", mat_result[i][j]);
        }
        printf("\n");
    }
}