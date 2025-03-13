#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popular_vet_num(int vetor[], int vet_size, int max){
   for (int i = 0 ; i < vet_size ; i++){
    vetor[i] = rand() % max;
   }
}

void popular_vet_op(char vetor[], int vet_size){
    for (int i = 0 ; i < vet_size ; i++){
        int randint = rand() % 4;
        switch (randint){
            case 0:
                vetor[i] = '+';
                break;
            case 1:
                vetor[i] = '-';
                break;
            case 2:
                vetor[i] = '*';
                break;
            case 3:
                vetor[i] = '/';
                break;
            }
    }
}

void op_vets(int vet_a[], int vet_b[], char vet_op[], float vet_result[],int size){
    for (int i = 0 ; i < size ; i++){
        switch (vet_op[i]){
            case '+':
                vet_result[i] = vet_a[i] + vet_b[i];
                break;
            case '-':
                vet_result[i] = vet_a[i] - vet_b[i];
                break;
            case '*':
                vet_result[i] = vet_a[i] * vet_b[i];
                break;
            case '/':
                if (vet_b[i] != 0){
                    vet_result[i] = (float)vet_a[i] / (float)vet_b[i];
                }
                else{
                    vet_result[i] = -1.5;
                }
                break;
            }
    }
}

int main(void){
    srand(time(NULL));
    int size = 20;
    int vet_a [size];
    int vet_b [size];
    char vet_op [size];
    float vet_result[size];

    int max = 50; //numeros de 0 a max
    popular_vet_num(vet_a, size, max+1);
    popular_vet_num(vet_b, size, max+1);
    popular_vet_op(vet_op, size);

    printf("Vetor A =  ");
    for (int i = 0 ; i < size ; i++){
        printf("[%d] ", vet_a[i]);
    } 
    printf("\nVetor Op = ");
    for (int i = 0 ; i < size ; i++){
        printf("[%c] ", vet_op[i]);
    }
    printf("\nVetor B =  ");
    for (int i = 0 ; i < size ; i++){
        printf("[%d] ", vet_b[i]);
    }

    op_vets(vet_a, vet_b, vet_op, vet_result, size);

    printf("\n\nResultados:");
    for (int i = 0 ; i < size ; i++){
        if (vet_result[i] != -1.5){
            printf("\n[%d] %c [%d] = [%g]", vet_a[i], vet_op[i], vet_b[i], vet_result[i]);
        }
        else{
            printf("\n[%d] %c [%d] = [ ]", vet_a[i], vet_op[i], vet_b[i]);
        }
    }
}