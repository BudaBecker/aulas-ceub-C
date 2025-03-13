#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int mat[3][4];

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            mat[i][j] = rand() % 20 + 1;
            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }
}