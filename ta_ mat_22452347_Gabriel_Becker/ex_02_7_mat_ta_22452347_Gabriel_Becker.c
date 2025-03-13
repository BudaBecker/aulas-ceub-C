#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int mat[3][4];

    //armazena os valores por colunas
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            mat[j][i] = rand() % 20 + 1;
        }
    }

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }
}