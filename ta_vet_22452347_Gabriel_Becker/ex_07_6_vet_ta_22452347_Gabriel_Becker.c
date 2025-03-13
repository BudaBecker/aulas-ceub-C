#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Prof, esse codigo foi baseado na teoria de conjuntos, A U B. So pra brincar um pouco :)
//  *A, B e 'A U B' nao podem conter numeros repetidos, pois sao conjuntos.

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

int *unir_conjunto(int vet_a[], int a_size, int vet_b[], int b_size, int *uni_size){
    int *vet_uni = malloc((a_size + b_size) * sizeof(int));
    int aux_uni_size = 0; //Auxiliar para definir o tamanho final do vetor uniao
    
    //Loop para adc os valores de A no vetor uniao
    for (int i = 0 ; i < a_size ; i++){
        vet_uni[i] = vet_a[i];
        aux_uni_size++;
    }

    //Loop para adc os valores de B no vetor uniao (tirando os repetidos de A)
    for (int i = 0; i < b_size; i++){
        bool rep = false;
        for (int j = 0 ; j < aux_uni_size ; j++){
            if (vet_b[i] == vet_uni[j]){
                rep = true;
                break;
            }
        }
        if (!rep){
            vet_uni[aux_uni_size] = vet_b[i];
            aux_uni_size++;
        }
    }
    
    *uni_size = aux_uni_size;
    return vet_uni;
}

int main(void){
    srand(time(NULL));
    int vet_a [10];
    int vet_b [20];
    
    //Determinar o tamano so pra facilitar os testes (posso mudar o tamanho do vetor sem mudar o resto do codigo)
    int a_size = sizeof(vet_a) / sizeof(vet_a[0]);
    int b_size = sizeof(vet_b) / sizeof(vet_b[0]);
    
    //Os conjuntos serao populados com numeros aleatorios de 0 ate max (sendo max >= b_size).
    int max = 20;
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

    //Criacao de um terceiro conjunto (A U B).
    int uni_size;
    int *vet_uni = unir_conjunto(vet_a, a_size, vet_b, b_size, &uni_size);

    printf("\nVetor Uniao = ");
    for (int i = 0 ; i < uni_size ; i++){
        printf("[%d] ", vet_uni[i]);
    }
    free(vet_uni);
}