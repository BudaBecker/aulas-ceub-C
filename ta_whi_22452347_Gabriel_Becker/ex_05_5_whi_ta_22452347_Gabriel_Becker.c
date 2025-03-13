#include <stdio.h>

int main(void){
    int qnt_nums=0, nums, soma=0;
    printf("Digite numeros inteiros positivos. (-1 para sair)\n");

    while(nums != -1){
        scanf("%d", &nums);
        if (nums != -1){
            soma += nums;
            qnt_nums++;
        }
    }
    
    printf("Soma de todos os %d numeros: %d", qnt_nums, soma);
}