#include <stdio.h>
#include <stdlib.h> //biblioteca desnecessaria
#include <time.h> //biblioteca desnecessaria

//Calcular o traco da matriz 5x5 (soma da diagonal principal), e printar os numeros da diagonal principal (a11, a22, a33, a44 e a55)

int main(void){
    int matriz[5][5];
    int sum_traco = 0;

    //Popular a matriz com numeros aleatorios de 0 a 10 (nao precisa fazer isso, apenas criar uma matriz qualquer)
    srand(time(NULL));
    printf("Matriz: \n");
    for (int i = 0 ; i < 5 ; i++){
        for (int j = 0 ; j < 5 ; j++){
            matriz[i][j] = rand() % 11;
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    //print da diagonal principal e somando o traco
    printf("Diagonal principal: ");
    for (int i = 0 ; i < 5 ; i++){
        printf("[%d] ", matriz[i][i]);
        sum_traco += matriz[i][i];
    }

    printf("\nTraco = %d", sum_traco);
}