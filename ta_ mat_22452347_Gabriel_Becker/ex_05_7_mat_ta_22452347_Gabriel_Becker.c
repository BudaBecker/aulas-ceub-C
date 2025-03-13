#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int matriz[4][5];
    int soma;

    //popular a matriz binaria
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            matriz[i][j] = rand() % 2;
        }
    }

    //formatar a saida
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
        if(i < 3){
            for(int j = 0 ; j < 5 ; j++){
                printf(" +  ");
            }
        }
        else{
            for(int j = 0 ; j < 5 ; j++){
                printf(" =  ");
            }
        }
        printf("\n");
    }

    //somar colunas
    for(int i = 0 ; i < 5 ; i++){
        soma = 0;
        for(int j = 0 ; j < 4 ; j++){
            soma += matriz[j][i];
        }
        printf("[%d] ", soma);
    }
}