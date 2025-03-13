#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int mat[4][5];
    int soma_linha, max_linha, max = 0;

    
    for(int i = 0 ; i < 4 ; i++){
        soma_linha = 0;
        for(int j = 0 ; j < 5 ; j++){
            mat[i][j] = rand() % 10;
            soma_linha += mat[i][j];
            printf("[%d] ", mat[i][j]);
        }
        printf("  -> soma = %d\n", soma_linha);
        if(soma_linha > max){
            max = soma_linha;
            max_linha = i+1;
        }
    }
    printf("\nSoma maxima (de %d) na linha %d", max, max_linha);
}