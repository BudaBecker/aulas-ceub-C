#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//O Ex.7 foi feita a uniao de dois conjuntos, nesse sera a interseccao (A ∩ B).

void popular_conjunto(int vetor[], int vet_size, int max){
    bool usados[max];
    for (int i = 0; i < max; i++) {  //Hash map para garantir que nao repita os valores.
        usados[i] = false;
    }

    int index = 0;
    while (index < vet_size){
        int randint = rand() % max;
        if (!usados[randint]) {
            vetor[index] = randint;
            usados[randint] = true;
            index++;
        }
    }
}

int *inter_conjunto(int vet_a[], int a_size, int vet_b[], int b_size, int *inter_size){
    int aux_inter_size = 0;
    int *vet_inter = malloc((a_size + b_size) * sizeof(int));

    //Verifica se ha valores iguais entre os 2 conjuntos, e armazena no vetor conjunto interseccao.
    for (int i = 0 ; i < a_size ; i++){
        for (int j = 0 ; j < b_size ; j++){
            if (vet_a[i] == vet_b[j]){
                vet_inter[aux_inter_size] = vet_a[i];
                aux_inter_size++;
                break;
            }
        }
    }

    *inter_size = aux_inter_size;
    return vet_inter;
}

int main(void){
    srand(time(NULL));
    int vet_a [10];
    int vet_b [20];
    int a_size = sizeof(vet_a) / sizeof(vet_a[0]);
    int b_size = sizeof(vet_b) / sizeof(vet_b[0]);
    

    int max = 100;
    popular_conjunto(vet_a, a_size, max+1);
    popular_conjunto(vet_b, b_size, max+1);
    
    printf("Vetor A = ");
    for (int i = 0 ; i < a_size ; i++){
        printf("[%d] ", vet_a[i]);
    } 
    printf("\nVetor B = ");
    for (int i = 0 ; i < b_size ; i++){
        printf("[%d] ", vet_b[i]);
    }

    int inter_size;
    int *vet_inter = inter_conjunto(vet_a, a_size, vet_b, b_size, &inter_size);

    printf("\nVetor Interseccao = ");
    if (inter_size == 0){
        printf("[ ]");         //Caso de conjunto vazio.
    }
    else{
        for (int i = 0 ; i < inter_size ; i++){
            printf("[%d] ", vet_inter[i]);
        }
    }
    free(vet_inter);
}