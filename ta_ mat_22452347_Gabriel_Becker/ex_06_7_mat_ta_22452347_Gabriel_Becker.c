#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int mat[4][5];
    int soma_linha;
    
    for(int i = 0 ; i < 4 ; i++){
        soma_linha = 0;
        for(int j = 0 ; j < 5 ; j++){
            mat[i][j] = rand() % 10;
            soma_linha += mat[i][j];
            printf("[%d] ", mat[i][j]);
        }
        printf("  -> media = %g\n", (float)soma_linha/5);
    }
}