#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int vet1 [10];
    int vet2 [10];
    int vet_result [10];
    
    //Ocupando os vetores com numeros aleatorios com numeros de 0 a 20.
    srand(time(NULL));
    for (int i = 0 ; i < 10 ; i++){
        vet1[i] = rand() % 20 + 1;
        vet2[i] = rand() % 20 + 1;
    }
    
    printf("Vetor 1 = ");
    for (int i = 0 ; i < 10 ; i++)
        printf("[%d] ", vet1[i]);

    printf("\nVetor 2 = ");
    for (int i = 0 ; i < 10 ; i++)
        printf("[%d] ", vet2[i]);

    for (int i = 0 ; i < 10 ; i++)
        vet_result[i] = vet1[i] + vet2[i];

    printf("\nVetor soma = ");
    for (int i = 0 ; i < 10 ; i++)
        printf("[%d] ", vet_result[i]);
}